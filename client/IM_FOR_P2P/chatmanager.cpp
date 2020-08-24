#include "chatmanager.h"
#include "ui_chatmanager.h"
#include <QDebug>
#include <QDateTime>
#include "SecondClasses/chatshowitem.h"
#include "SecondClasses/chatcontentround.h"
#include "Msg/ChatMsg.pb.h"
#include "network.h"
#include "buildp2p.h"



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

    ui->headInfo->setStyleSheet("QLabel{background:#ffffff;}");

    connect(this,&ChatManager::delitem,[=](int chatID){
        delete ui->listWidget->takeItem((ui->listWidget->row(m_itemMap.at(chatID))));
        m_itemMap.erase(chatID);
        m_chatShowItemMap.erase(chatID);
        this->setNoCaht();
    });

    //处理接收的消息
    connect(this,&ChatManager::msgSignal,this,&ChatManager::handleMsg);

    Network::getInstance()->addObserver(this);
}

bool ChatManager::init()
{
    connect(ui->sendButton,&QPushButton::released,this,&ChatManager::clickSendButton);


    this->setNoCaht();
    return true;
}

void ChatManager::clickSendButton()
{
    QString text=ui->textEdit->toPlainText();
    if(text!="")
    {
        One_Msg msg;
        int sex=ClientManager::getInstance()->getUserInfo()->sex;
        if(sex==1)
            msg.m_icon=QString(":/Resource/Images/userIcon.png");
        else
            msg.m_icon=QString(":/Resource/Images/userIconF.png");
        msg.m_content=text;
        msg.m_talktime=QDateTime::currentDateTime();
        msg.m_msgType=show_type_enum::SHOW_TYPE_RIGHT;
        m_curItem->addOneMsg(msg);
        ui->textEdit->setText("");

        IM::ChatMsg data;
        data.set_networktype(MsgType::CHAT);
        data.set_recvid(m_curItem->getChaterID());
        data.set_sendid(ClientManager::getInstance()->getUserInfo()->userID);
        data.set_content(text.toStdString());
        data.set_sendtime(QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss").toStdString());


        Network::getInstance()->addMsg<IM::ChatMsg>(data);

    }
}

void ChatManager::setNoCaht()
{
    ui->listWidget_chat->clear();
    ui->listWidget_chat->hide();
    ui->smallface->hide();
    ui->chatRecord->hide();
    ui->sendButton->hide();
    ui->textEdit->hide();
    ui->headInfo->hide();

}

QListWidget* ChatManager::getShowListWidget()
{
    return ui->listWidget;
}
QListWidget* ChatManager::getChatListWidget()
{
    return ui->listWidget_chat;
}

void ChatManager::addItem(ChatShowItem* showWidget)
{
    if(m_itemMap.count(showWidget->getChaterID()))
    {
       m_chatShowItemMap.at(showWidget->getChaterID())->mouseClick();
       return;
    }
    QListWidgetItem* item=new QListWidgetItem(ui->listWidget);
    item->setSizeHint(showWidget->size());
    ui->listWidget->setItemWidget(item,showWidget);

    this->m_itemMap[showWidget->getChaterID()]=item;
    this->m_chatShowItemMap[showWidget->getChaterID()]=showWidget;

    this->setCurItem(showWidget);


    //显示聊天相关控件
    ui->listWidget_chat->show();
    ui->smallface->show();
    ui->chatRecord->show();
    ui->sendButton->show();
    ui->textEdit->show();
    ui->headInfo->show();

    ui->headInfo->setText(showWidget->getUserNickname());

}

void ChatManager::setCurItem(ChatShowItem* curItem)
{
    if(m_curItem==curItem)
    {
        return;
    }

    m_itemMap.at(curItem->getChaterID())->setSelected(true);
    m_curItem=curItem;
    ui->headInfo->setText(curItem->getUserNickname());
    ui->listWidget_chat->clear();

    //显示聊天相关控件
    ui->listWidget_chat->show();
    ui->smallface->show();
    ui->chatRecord->show();
    ui->sendButton->show();
    ui->textEdit->show();
    ui->headInfo->show();

    BuildP2P::getInstance()->sendMsg(m_curItem->getChaterID());
}


void ChatManager::recvMsg(const char *msg)
{
    int msgType=-1;
    int msgID=-1;
    //格式：接收者ID\n发送者ID\n消息ID\n消息类型\n消息内容长度\n消息内容
    sscanf(msg,"%*d\n%*d\n%d\n%d\n",&msgID,&msgType);  //获取消息ID 消息类型
    if(msgType==MsgType::CHAT)
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
        IM::ChatMsg *res=new IM::ChatMsg();
        res->ParseFromArray((void*)tmp,contentLen);
        emit msgSignal(res);
    }
}

void ChatManager::handleMsg(IM::ChatMsg* msg)
{
    qDebug()<<"-------------handleMsg-------------";
    One_Msg data;
    data.m_msgType=show_type_enum::SHOW_TYPE_LEFT;
    data.m_content=QString::fromStdString(msg->content());
    data.m_talktime=QDateTime::fromString(QString::fromStdString(msg->sendtime()),"yyyy-MM-dd HH:mm:ss");
    msg->sendid();
    qDebug()<<"-------------sendid-------------"<<msg->sendid();
    m_chatShowItemMap.at(msg->sendid())->addOneMsg(data);
}

ChatManager::~ChatManager()
{
    delete ui;
}
