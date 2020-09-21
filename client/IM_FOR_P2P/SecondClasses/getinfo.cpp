#include "getinfo.h"
#include "Msg/ModifyInfo.pb.h"
#include "network.h"
#include <QString>
#include "clientmanager.h"

UserInfo* GetInfo::m_userInfo=nullptr;
GetInfo* GetInfo::m_instance=nullptr;
int GetInfo::m_state=0;
long long GetInfo::m_serveID=0;

GetInfo::GetInfo()
{

}

GetInfo* GetInfo::getInstance()
{
    if(m_instance==nullptr)
    {
        m_instance=new GetInfo();
        Network::getInstance()->addObserver(m_instance);
    }
    return m_instance;
}


bool GetInfo::getInfo(UserInfo* userInfo)
{
    m_state=0;
    m_userInfo=userInfo;

    IM::ModifyInfo transinfo;
    if(userInfo->phoneNum.length()==11)
    {
        m_serveID=std::atoll(userInfo->phoneNum.c_str());
        transinfo.set_phone(userInfo->phoneNum);
        //set_sendid((int)(idOrPhone.toDouble()/100))
        QString tmp=QString::fromStdString(userInfo->phoneNum);
        transinfo.set_sendid((int)(tmp.toDouble()/100));
    }
    if(userInfo->userID!=0)
    {
        m_serveID=userInfo->userID;
        transinfo.set_userid(userInfo->userID);
        transinfo.set_sendid(ClientManager::getInstance()->getUserInfo()->userID);
    }
    transinfo.set_networktype(MsgType::MODIFYUAERINFO);
    transinfo.set_recvid(0);
    transinfo.set_requiretype(IM::ModifyInfo_RequireType::ModifyInfo_RequireType_READ);

    //Network::getInstance()->addObserver(m_instance);
    if(m_instance==nullptr)
        GetInfo::getInstance();
    Network::getInstance()->addMsg<IM::ModifyInfo>(transinfo);

    clock_t start=clock();
    clock_t time=0;
    while(0==m_state&&time<3000)
    {
        //qDebug()<<"------: "<<time;
        time=clock()-start;
        QThread::msleep(500);
    }
    if(m_state==1)
    {
        qDebug()<<"-------getInfo---return true----";
        return true;
    }

    return false;
}

void GetInfo::recvMsg(const char *msg)
{
    int msgType=-1;
    int msgID=-1;
    //格式：接收者ID\n发送者ID\n消息ID\n消息类型\n消息内容长度\n消息内容
    sscanf(msg,"%*d\n%*d\n%d\n%d\n",&msgID,&msgType);  //获取消息ID 消息类型
    if(MsgType::MODIFYUAERINFO==msgType)
    {
        qDebug()<<"---------getInfo---------"<<msg;
        int msgType=-1;
        int msgID=-1;
        int sendID=-1;
        int contentLen=-1;
        char tmp[1024]={0};

        //格式：接收者ID\n发送者ID\n消息ID\n消息类型\n消息内容长度\n消息内容
        sscanf(msg,"%*d\n%d\n%d\n%d\n%d\n",&sendID,&msgID,&msgType,&contentLen);  //获取消息ID 消息类型
        const char *p=msg;
        for(int i=0,flag=0;flag!=5;++i)
        {
             if(*p++ =='\n')
                  ++flag;
        }
        memcpy(tmp,p,contentLen);
        IM::ModifyInfo res;
        res.ParseFromArray((void*)tmp,contentLen);
        if(m_serveID !=std::atoll(res.phone().c_str())&&m_serveID!=res.userid())                //电话号吗
        {
            //if(m_serveID!=std::atoll(res.phone().c_str()))
                return;
        }
        qDebug()<<"-------获取的用户ID: "<<res.userid();
        m_userInfo->sex=res.sex();
        qDebug()<<"-------信息获取状态: 1";
        m_userInfo->userID=res.userid();
        qDebug()<<"-------信息获取状态: 2";
        char* icon=(char*)malloc(res.icon().length());
        memcpy(icon,res.icon().c_str(),res.icon().length());
        m_userInfo->icon=icon;
        qDebug()<<"-------信息获取状态: 3";
        m_userInfo->nickName=res.nickname();
        qDebug()<<"-------信息获取状态: 4";
        m_userInfo->passwd=res.password();
        qDebug()<<"-------信息获取状态: 5"<<QString::fromStdString(res.phone());
        m_userInfo->phoneNum=res.phone();
        qDebug()<<"-------信息获取状态: 6";
        m_userInfo->userSign=res.desc();
        qDebug()<<"-------信息获取状态: 7";
        m_state=res.state();
        qDebug()<<"-------信息获取状态: "<<m_state;
    }

}
