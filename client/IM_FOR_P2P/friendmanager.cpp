#include "friendmanager.h"
#include "ui_friendmanager.h"
#include <QDebug>

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
}

bool FriendManager::init()
{
    /*

    //发送信号
    connect(ui->msgButton,&QPushButton::released,this,&FriendManager::clickMsg);
    connect(ui->groupButton,&QPushButton::released,this,&FriendManager::clickGroup);

    //接收信号
    connect(clientManager->getChatManager(),&ChatManager::clickFriendSignal,[=](){
        this->show();
    });
    connect(clientManager->getGroupManager(),&GroupManager::clickFriendSignal,[=](){
        this->show();
    });

*/

    return true;
}

void FriendManager::clickMsg()
{
    //隐藏自己并发送信号
    this->hide();
    emit clickMsgSignal();
}
void FriendManager::clickGroup()
{
    this->hide();
    emit clickGroupSignal();
}

FriendManager::~FriendManager()
{
    delete ui;
}
