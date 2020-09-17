#include "friendmanager.h"
#include "ui_friendmanager.h"
#include "SecondClasses/getinfo.h"
#include "showuserinfo.h"
#include "Msg/RelationManage.pb.h"
#include "Msg/ApplyAgree.pb.h"
#include "SecondClasses/frienditem.h"
#include "LoadFriendInfo.pb.h"
#include <QListWidgetItem>
#include <QDebug>
#include <exception>
#include "buildp2p.h"

FriendManager::FriendManager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FriendManager)
{
    ui->setupUi(this);
}

FriendManager::FriendManager(ClientManager *manager,QWidget *parent) :
    QWidget(parent),
    clientManager(manager),
    ui(new Ui::FriendManager)
{
    ui->setupUi(this);
    Network::getInstance()->addObserver(this);





}

bool FriendManager::init()
{

    qDebug()<<"------------FriendManager::init--------------";
    connect(ui->searchButton,&QPushButton::pressed,this,&FriendManager::clickSearchButton);
    m_showUserInfo=new ShowUserInfo(ui->showWidget);
    m_showUserInfo->hide();

    //添加好友信号与槽绑定
    connect(m_showUserInfo,&ShowUserInfo::clickAdd,this,&FriendManager::add);

    //从好友界面去聊天界面
    connect(m_showUserInfo,&ShowUserInfo::clickSend,this,&FriendManager::toChat);

    //是否同意添加好友请求
    connect(m_showUserInfo->getAgree(),&QPushButton::clicked,this,&FriendManager::toAgree);
    connect(m_showUserInfo->getDisagree(),&QPushButton::clicked,this,&FriendManager::toDisagree);

    connect(this,&FriendManager::peerOnline,this,[=](int id){
        m_friendsMap.at(id)->setOnline();
    },Qt::QueuedConnection);


    //加载数据
    qDebug()<<"---------加载数据-----------";
    IM::LoadFriendInfo data;
    data.set_networktype(MsgType::LOADFRIENDINFO);
    data.set_recvid(0);
    data.set_sendid(ClientManager::getInstance()->getUserInfo()->userID);
    Network::getInstance()->addMsg<IM::LoadFriendInfo>(data);


    if(ui->listWidget->count()==3) return true;
    QListWidgetItem *item=new QListWidgetItem(QIcon(":/Resource/Images/apply.png"),QString("等待对方同意"));
    ui->listWidget->addItem(item);

    QListWidgetItem *item1=new QListWidgetItem(QIcon(":/Resource/Images/apply.png"),QString("对方请求添加"));
    ui->listWidget->addItem(item1);

    QListWidgetItem *item2=new QListWidgetItem(QIcon(":/Resource/Images/apply.png"),QString("好友"));
    ui->listWidget->addItem(item2);

    return true;
}

int index1=1,index2=2,index3=3;//标识插入的位置
void FriendManager::initListWidget()
{
    for(auto i:m_userInfoList)
    {
        qDebug()<<"--------initlistwidget--state--"<<i->state();
        //int friendId=i->userid()==ClientManager::getInstance()->getUserInfo()->userID?i->friendid():i->userid();
        if(i->state()==1&&i->userid()==ClientManager::getInstance()->getUserInfo()->userID)
        {//你加别人
            UserInfo* userInfo=new UserInfo();
            userInfo->userID=i->friendid();
            userInfo->sex=i->f_sex();
            qDebug()<<"--------initlistwidget----"<<i->friendid();
            userInfo->nickName=i->friendremarkname();
            qDebug()<<"--------initlistwidget----0";
            FriendItem* tmp=new FriendItem(this,userInfo);
            tmp->setItemTyep(1); //你请求加别人
            tmp->setShowUserInfo(m_showUserInfo);

            m_addPeerMap[userInfo->userID]=tmp;

            qDebug()<<"--------initlistwidget----1";

            QListWidgetItem *item=new QListWidgetItem();
            this->m_itemMap[userInfo->userID]=item;
            item->setSizeHint(QSize(185,50));
            ui->listWidget->insertItem(index1++,item);
            qDebug()<<"--------initlistwidget----2";
            ui->listWidget->setItemWidget(item,m_addPeerMap[userInfo->userID]);
            continue;
        }




        //加载申请列表
        index2+=m_addPeerMap.size();
        qDebug()<<"--------initlistwidget--state--"<<i->state();
        if(i->state()==1&&i->friendid()==ClientManager::getInstance()->getUserInfo()->userID)
        {//别人加你
            UserInfo* userInfo=new UserInfo();
            userInfo->userID=i->userid();
            userInfo->sex=i->u_sex();
           // qDebug()<<"--------initlistwidget----"<<i->friendid();
            userInfo->nickName=i->userremarkname();
            //qDebug()<<"--------initlistwidget----0";
            FriendItem* tmp=new FriendItem(this,userInfo);
            tmp->setItemTyep(2);  //别人请求加你
            tmp->setShowUserInfo(m_showUserInfo);

            this->m_peerAddMap[userInfo->userID]=tmp;

            //qDebug()<<"--------initlistwidget----1";

            QListWidgetItem *item=new QListWidgetItem();
            this->m_itemMap[userInfo->userID]=item;
            item->setSizeHint(QSize(185,50));
            ui->listWidget->insertItem(index2++,item);
            qDebug()<<"--------initlistwidget----2";
            ui->listWidget->setItemWidget(item,m_peerAddMap[userInfo->userID]);
        }


        //加载好友列表
        index3+=m_addPeerMap.size()+m_peerAddMap.size();
        qDebug()<<"--------initlistwidget--state--"<<i->state();
        if(i->state()==2)
        {//好友
            UserInfo* userInfo=new UserInfo();
            userInfo->userID=i->userid()==ClientManager::getInstance()->getUserInfo()->userID?i->friendid():i->userid();
            userInfo->sex=i->userid()==ClientManager::getInstance()->getUserInfo()->userID?i->f_sex():i->u_sex();


            //qDebug()<<"--------initlistwidget----"<<i->friendid();
            userInfo->nickName=i->userid()==ClientManager::getInstance()->getUserInfo()->userID?i->friendremarkname():i->userremarkname();
            //qDebug()<<"--------initlistwidget----0";
            FriendItem* tmp=new FriendItem(this,userInfo);
            tmp->setItemTyep(3);  //已是好友关系
            tmp->setShowUserInfo(m_showUserInfo);

            this->m_friendsMap[userInfo->userID]=tmp;

            //如果好友在线 与好友建立P2P连接
            BuildP2P::getInstance()->sendMsg(userInfo->userID);//向服务器请求好友网络信息

            qDebug()<<"--------initlistwidget----1";


            QListWidgetItem *item=new QListWidgetItem();
            this->m_itemMap[userInfo->userID]=item;
            item->setSizeHint(QSize(185,50));
            ui->listWidget->insertItem(index3++,item);
            qDebug()<<"--------initlistwidget----2";
            ui->listWidget->setItemWidget(item,m_friendsMap[userInfo->userID]);

            //等待网络消息
            //QThread::msleep(100);
            //tmp->setOnline();

        }

    }
}

void FriendManager::toChat(int&)
{
    qDebug()<<"-------------FriendManager::toChat-------------";
    ClientManager::getInstance()->getMainWindow()->clickChatButton();
    int chatId=m_showUserInfo->getUserInfo()->userID;
    QString icon;
    if(m_showUserInfo->getUserInfo()->sex==1)
        icon=QString(":/Resource/Images/userIcon.png");
    else
        icon=QString(":/Resource/Images/userIconF.png");
    QString chatNickname(QString::fromStdString(m_showUserInfo->getUserInfo()->nickName));
    //QListWidgetItem* item=new QListWidgetItem(ClientManager::getInstance()->getMainWindow()->getChatManager()->getShowListWidget());
    ChatShowItem* widget=new ChatShowItem(chatId,icon,chatNickname,ClientManager::getInstance()->getMainWindow()->getChatManager());
    widget->run();
    ClientManager::getInstance()->getMainWindow()->getChatManager()->addItem(widget);
    //item->setSizeHint(widget->size());
    //ClientManager::getInstance()->getMainWindow()->getChatManager()->getShowListWidget()->setItemWidget(item,widget);
}

void FriendManager::toAgree()
{
    UserInfo* info=this->m_showUserInfo->getUserInfo();
    qDebug()<<"----FriendManager::toAgree---:"<<this->m_showUserInfo->getUserInfo()->userID;
    IM::ApplyAgree data;
    data.set_networktype(MsgType::AGREEADDFRIEND);
    data.set_recvid(0);
    data.set_sendid(ClientManager::getInstance()->getUserInfo()->userID);
    data.set_applyerid(info->userID);
    data.set_peerid(data.sendid());
    data.set_state(2); //表示同意
    Network::getInstance()->addMsg<IM::ApplyAgree>(data);


    UserInfo* userInfo=new UserInfo();
    userInfo->userID=info->userID;
    userInfo->sex=info->sex;
    userInfo->nickName=info->nickName;
    qDebug()<<"--------initlistwidget----0";
    FriendItem* tmp=new FriendItem(this,userInfo);
    tmp->setItemTyep(3); //好友
    tmp->setShowUserInfo(m_showUserInfo);

    //添加到朋友列表
    this->m_friendsMap[info->userID]=tmp;
    this->m_peerAddMap.erase(info->userID);

    //更新界面
    qDebug()<<"=====================跟新界面===============";
    QListWidgetItem* item=ui->listWidget->takeItem(ui->listWidget->row(this->m_itemMap.at(this->m_showUserInfo->getUserInfo()->userID)));
    --index3;
    ui->listWidget->insertItem(index3++,item);
    ui->listWidget->setItemWidget(item,tmp);
    qDebug()<<"----------m_peerAddMap-----------";

    this->m_showUserInfo->hide();
}
void FriendManager::toDisagree()
{
    UserInfo* info=this->m_showUserInfo->getUserInfo();
    qDebug()<<"----FriendManager::toDisagree---:"<<this->m_showUserInfo->getUserInfo()->userID;
    IM::ApplyAgree data;
    data.set_networktype(MsgType::AGREEADDFRIEND);
    data.set_recvid(0);
    data.set_sendid(ClientManager::getInstance()->getUserInfo()->userID);
    data.set_applyerid(info->userID);
    data.set_peerid(data.sendid());
    data.set_state(0); //表示不同意
    Network::getInstance()->addMsg<IM::ApplyAgree>(data);

    this->m_peerAddMap.erase(info->userID);
    delete ui->listWidget->takeItem(ui->listWidget->row(this->m_itemMap.at(this->m_showUserInfo->getUserInfo()->userID)));
    this->m_showUserInfo->hide();
}

void FriendManager::clickSearchButton()
{

    qDebug()<<"____________clickSearchButton_____________";
    QString input=ui->searchBar->text();
    int len=input.length();
    //判断输入框是内容是否合法
    if(len==0) return;

    //先在本地查找
    if(this->searchBuilded(input)) return;

    //没找到再到服务器上找，先检查输入是否位纯数字
    bool flag=false;
    input.toLongLong(&flag);
    if(flag&&len>4&&len<12)  //是一个理论上合法ID,或者是个手机号
        this->searchNoBuild(input);

}

void FriendManager::recvMsg(const char *msg)
{

    int msgType=-1;
    //int msgID=-1;
    //格式：接收者ID\n发送者ID\n消息ID\n消息类型\n消息内容长度\n消息内容
    sscanf(msg,"%*d\n%*d\n%*d\n%d\n",&msgType);  //获取消息ID 消息类型
    qDebug()<<"----------------friendmanage消息类型：--------------"<<msgType;
    int contentLen;
    char tmp[1024]={0};

    //格式：接收者ID\n发送者ID\n消息ID\n消息类型\n消息内容长度\n消息内容
    sscanf(msg,"%*d\n%*d\n%*d\n%*d\n%d\n",&contentLen);  //获取消息ID 消息类型
    const char *p=msg;
    for(int i=0,flag=0;flag!=5;++i)
    {
         if(*p++ =='\n')
              ++flag;
    }
    memcpy(tmp,p,contentLen);

    switch(msgType)
    {
    case MsgType::ADDFRIEND:
    {
        qDebug()<<"----------------MsgType::ADDFRIEND--------------";

        IM::RelationManage res;
        res.ParseFromArray((void*)tmp,contentLen);//获取到Msg
        qDebug()<<"------获取消息------"<<res.state();
        m_flag=res.state();  //对接收到消息意味着成功 不成功 服务器不发送消息
        //qDebug()<<"--recvMsg---m_flag----"<<m_flag<<&m_flag;
        break;
    }
    case MsgType::DELFRIEND:
    {
        qDebug()<<"----------------MsgType::DELFRIEND--------------";
        break;
    }
    case MsgType::MODIFYFRIEND:
    {
        qDebug()<<"----------------MsgType::MODIFYFRIEND--------------";
        break;
    }
    case MsgType::LOADFRIENDINFO:
    {
        qDebug()<<"----------------MsgType::LoadFriendInfo------------";
        IM::LoadFriendInfo *res=new IM::LoadFriendInfo();
        res->ParseFromArray((void*)tmp,contentLen);//获取到Msg
        qDebug()<<"-------状态"<<res->state();
        qDebug()<<"-------朋友ID"<<res->friendid();
        this->m_userInfoList.push_back(res);
        break;
    }
    case MsgType::AGREEADDFRIEND:
    {
        IM::ApplyAgree res;
        res.ParseFromArray((void*)tmp,contentLen);
        if(1==res.state())
        {
            emit agreeAdd(res.applyerid());
        }
        break;
    }
    default:
         qDebug()<<"----------------FriendManage::default--------------";
        break;
    }

}




void FriendManager::modify()
{

}


void FriendManager::add(int & friendID)
{
    m_flag=-1;
    qDebug()<<"------------FiendManger::add------------";
    IM::RelationManage data;
    data.set_networktype(MsgType::ADDFRIEND); //添加朋友
    data.set_recvid(0);                       //发送给服务器
    data.set_sendid(ClientManager::getInstance()->getUserInfo()->userID);

    data.set_applyerid(ClientManager::getInstance()->getUserInfo()->userID);
    data.set_peerid(friendID);  //要添加的盆友ID
    data.set_state(1);          //表示申请
    data.set_applyernickname(ClientManager::getInstance()->getUserInfo()->nickName);
    data.set_peernickname(m_showUserInfo->getUserInfo()->nickName);
    qDebug()<<"------add Friend------"<<QString::fromStdString(data.peernickname());

    Network::getInstance()->addMsg<IM::RelationManage>(data);
    clock_t start =clock();
    while(clock()-start<3000)
    {
        if(m_flag==1) break;
        //qDebug()<<"--------m_flag-------"<<m_flag<<&m_flag;
        QThread::msleep(20);
    }
    qDebug()<<"--------m_flag-------"<<m_flag<<&m_flag;
    if(m_flag==1)
    {
        qDebug()<<"-------申请成功-------";

        FriendItem* tmp=new FriendItem(this,m_showUserInfo->getUserInfo());
        tmp->setItemTyep(1);  //1表示申请中
        m_addPeerMap[friendID]=tmp;

        QListWidgetItem * item=new QListWidgetItem();
        item->setSizeHint(QSize(185,50));
        ui->listWidget->insertItem(m_addPeerMap.size(),item);
        ui->listWidget->setItemWidget(item,m_addPeerMap[friendID]);

    }else
    {
        qDebug()<<"-------申请失败-------";
    }
}

bool FriendManager::searchBuilded(QString& text)
{


    return false;
}

bool FriendManager::searchNoBuild(QString& text){
    qDebug()<<"____________searchNoBuild_____________";
    //.........在服务器中搜索...........


    UserInfo *userInfo=new UserInfo();
    if(text.length()==11)
        userInfo->phoneNum=text.toStdString();
    else
        userInfo->userID=text.toInt();
    if(!GetInfo::getInfo(userInfo)) return false;  //获取失败

    qDebug()<<"---------------"<<userInfo->userID;
    m_showUserInfo->showInfo(userInfo);
    m_showUserInfo->show();

    //显示添加按钮
    m_showUserInfo->getAgree()->hide();
    m_showUserInfo->getDisagree()->hide();
    m_showUserInfo->getAddORChat()->show();
    m_showUserInfo->getAddORChat()->setText(QString("添加"));
    m_showUserInfo->getAddORChat()->setIcon(QIcon(":/Resource/Images/addfriend.png"));
    m_showUserInfo->setState(1); //表示是搜索到的信息显示

    //connect(m_showUserInfo,&QPushButton::);


    return false;

}

void FriendManager::selectedItem(int friendID)
{
    m_itemMap.at(friendID)->setSelected(true);
}

void FriendManager::del(int & )
{

}

FriendManager::~FriendManager()
{
    delete ui;
}
