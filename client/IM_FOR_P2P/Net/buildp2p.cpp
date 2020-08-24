#include "buildp2p.h"
#include "Msg/BuildP2P.pb.h"
#include "network.h"
#include "clientmanager.h"
#include <QUdpSocket>

BuildP2P* BuildP2P::m_instance=nullptr;

BuildP2P::BuildP2P()
{
    Network::getInstance()->addObserver(this);
}


BuildP2P* BuildP2P::getInstance()
{
    if(m_instance==nullptr)
    {
        m_instance=new BuildP2P();
    }
    return m_instance;
}

void BuildP2P::sendMsg(const int& peerID)
{
    IM::BuildP2P data;
    data.set_networktype(MsgType::BUILDP2P);
    data.set_recvid(0);
    data.set_sendid(ClientManager::getInstance()->getUserInfo()->userID);
    data.set_peerid(peerID);
    
    Network::getInstance()->addMsg<IM::BuildP2P>(data);
}

void BuildP2P::recvMsg(const char *msg)
{
    int msgType=-1;
    int msgID=-1;
    //格式：接收者ID\n发送者ID\n消息ID\n消息类型\n消息内容长度\n消息内容
    sscanf(msg,"%*d\n%*d\n%d\n%d\n",&msgID,&msgType);  //获取消息ID 消息类型
    if(MsgType::BUILDP2P==msgType)
    {
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
        IM::BuildP2P res;
        res.ParseFromArray((void*)tmp,contentLen);
        if(res.flag()==1)//服务器回的 对端在线
        {
            qDebug()<<"------peerIP:"<<QString::fromStdString(res.peerip())<<":"<<res.peerposrt();

            (*Network::getInstance()->m_netInfo)[res.peerid()].ip=QHostAddress(QString::fromStdString(res.peerip()));
            (*Network::getInstance()->m_netInfo)[res.peerid()].port=res.peerposrt();
            res.set_flag(2);//不需要处理 发送给对端 打通隧道
            res.set_sendid(res.recvid());
            res.set_recvid(res.peerid());
            Network::getInstance()->addMsg<IM::BuildP2P>(res);

            return;
        }
        if(res.flag()==2)
        {
            qDebug()<<"---------建立成功---------";
            return;
        }

    }

}

