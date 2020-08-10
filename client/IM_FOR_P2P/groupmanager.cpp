#include "groupmanager.h"
#include "ui_groupmanager.h"

GroupManager::GroupManager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GroupManager)
{
    ui->setupUi(this);
}

GroupManager::GroupManager(ClientManager * manager,QWidget *parent) :
    QWidget(parent),
    clientManager(manager),
    ui(new Ui::GroupManager)
{
    ui->setupUi(this);
}

bool GroupManager::init()
{
    //发送信号
    connect(ui->msgButton,&QPushButton::released,this,&GroupManager::clickMsg);
    connect(ui->friendButton,&QPushButton::released,this,&GroupManager::clickFriend);

    //接收信号
    connect(clientManager->getChatManager(),&ChatManager::clickGroupSignal,[=](){
        this->show();
    });
    connect(clientManager->getFriendManager(),&FriendManager::clickGroupSignal,[=](){
        this->show();
    });

    return true;
}

void GroupManager::clickMsg()
{
    this->hide();
    emit clickMsgSignal();
}
void GroupManager::clickFriend()
{
    this->hide();
    emit clickFriendSignal();
}

GroupManager::~GroupManager()
{
    delete ui;
}
