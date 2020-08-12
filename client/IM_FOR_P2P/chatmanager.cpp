#include "chatmanager.h"
#include "ui_chatmanager.h"
#include <QDebug>


ChatManager::ChatManager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChatManager)
{
    ui->setupUi(this);
}

ChatManager::ChatManager(ClientManager * manager,QWidget *parent) :
    QWidget(parent),
    clientManager(manager),
    ui(new Ui::ChatManager)
{
    ui->setupUi(this);
}

bool ChatManager::init()
{
    connect(ui->searchButton,&QPushButton::released,[=](){
        qDebug()<<"fffjj";
    });
/*
    //connect(ui->msgButton,&QPushButton::released,this,&ChatManager::clickMsg);
    connect(ui->friendButton,&QPushButton::released,this,&ChatManager::clickFriend);
    connect(ui->groupButton,&QPushButton::released,this,&ChatManager::clickGroup);

    //从登录界面跳此界面
    connect(clientManager->getSignIn(),&SignIn::clickSignInSignal,[=](){
        this->show();
    });
    //从群管理界面跳到此界面
    connect(clientManager->getGroupManager(),&GroupManager::clickMsgSignal,[=](){
        this->show();
    });
    //从好友管理界面跳到此界面
    connect(clientManager->getFriendManager(),&FriendManager::clickMsgSignal,[=](){
        this->show();
    });
    */
    return true;
}


void ChatManager::clickFriend()
{
    this->hide();
    emit clickFriendSignal();
}
void ChatManager::clickGroup()
{
    this->hide();
    emit clickGroupSignal();
}

ChatManager::~ChatManager()
{
    delete ui;
}
