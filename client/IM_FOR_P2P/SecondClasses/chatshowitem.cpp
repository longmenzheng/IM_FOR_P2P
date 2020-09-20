#include "chatshowitem.h"
#include "ui_chatshowitem.h"
#include <QDebug>

ChatShowItem::ChatShowItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChatShowItem)
{
    ui->setupUi(this);
    ui->delChat->hide();



}

ChatShowItem::ChatShowItem(int chatId,QString& icon,QString& userNickname,ChatManager* chatManager,QWidget *parent):
    QWidget(parent),
    ui(new Ui::ChatShowItem),
    m_chaterID(chatId),
    m_icon(icon),
    m_userNickname(userNickname),
    m_chatManager(chatManager)
{
    ui->setupUi(this);
    ui->delChat->hide();

    ui->unRead->setStyleSheet(QString("border-image:url(:/Resource/Images/redYuan.png);"));
    ui->unRead->hide();

    ui->label->setStyleSheet(QString("QLabel{color:rgb(255,255,255);font-size:12px;font-weight:Bold;}"));
    ui->label->hide();

    //聊天删除
    connect(ui->delChat,&QPushButton::clicked,this,&ChatShowItem::clickDelChatButton);

    //未读消息
    connect(this,&ChatShowItem::unReadMsg,this,&ChatShowItem::showUnReadMsg);
}


void ChatShowItem::enterEvent(QEvent *event)
{
    //qDebug()<<"-------------mouse_enter----------";
    ui->delChat->show();
}
void ChatShowItem::leaveEvent(QEvent *event)
{
    //qDebug()<<"-------------mouse_leave----------";
    ui->delChat->hide();
}

void ChatShowItem::mouseClick()
{
    mousePressEvent(nullptr);
}

void ChatShowItem::mousePressEvent(QMouseEvent *event)
{
    if(m_chatManager->getCurItem()==this) return;
    m_chatManager->setCurItem(this);

    for(auto i:m_msgList)
    {
        QListWidgetItem* item=new QListWidgetItem(m_chatManager->getChatListWidget());
        ChatContentRound* msgWidget=new ChatContentRound();
        if(i->m_msgType!=show_type_enum::SHOW_TYPE_TIME)
        {
            msgWidget->setuserIconName(i->m_icon);
            msgWidget->setuserChatContent(i->m_content);
        }
        msgWidget->settalkTime(i->m_talktime);
        msgWidget->resize(m_chatManager->getChatListWidget()->width()-25,msgWidget->getwindowHeight());
        msgWidget->run(i->m_msgType);
        item->setSizeHint(msgWidget->size());
        m_chatManager->getChatListWidget()->setItemWidget(item,msgWidget);
    }

    //发送一个已读消息数量
    ClientManager::getInstance()->getMainWindow()->unReadMsg(-m_unReadMsgCount);

    //将未读消息 改为已读
    emit unReadMsg(m_unReadMsgCount=0);

}
void ChatShowItem::showUnReadMsg(int un)
{

    m_unReadMsgCount+=un;
    if(m_unReadMsgCount<=0)
    {
        m_unReadMsgCount=0;
        ui->unRead->hide();
        ui->label->hide();
        return;
    }

    ui->label->setText(QString::fromStdString(std::to_string(m_unReadMsgCount)));
    ui->unRead->show();
    ui->label->show();
}

void ChatShowItem::clickDelChatButton()
{
    //qDebug()<<"-------------chatShowItem_click----------";
    emit m_chatManager->delitem(m_chaterID); //触发chatManager的delitem信号
    //发送一个已读消息数量

    ClientManager::getInstance()->getMainWindow()->unReadMsg(-m_unReadMsgCount);
}

void ChatShowItem::run()
{
    qDebug()<<"-------------chatShowItem_run----------"<<m_userNickname;
    ui->userIcon->setPixmap(QPixmap(m_icon));
    ui->userIcon->setScaledContents(true);
    ui->nickname->setText(m_userNickname);

}

void ChatShowItem::addOneMsg(One_Msg& msg)
{
    One_Msg* oneMsg=new One_Msg();
    oneMsg->m_icon=msg.m_icon;
    oneMsg->m_msgType=msg.m_msgType;
    oneMsg->m_content=msg.m_content;
    oneMsg->m_talktime=msg.m_talktime;
    oneMsg->m_userNickname=msg.m_userNickname;
    qDebug()<<"---------oneMsg->m_userNickname---------"<<msg.m_userNickname;
    QDateTime lastTime;
    uint t_ret=0;
    if(!this->m_msgList.empty())
    {
        lastTime=this->m_msgList.back()->m_talktime;
        t_ret=QDateTime::currentDateTime().toTime_t()-lastTime.toTime_t();
    }

    if(t_ret>120||m_msgList.empty())
    {//如果与最后一条消息时间差超过2分钟 显示一个时间
        One_Msg* time=new One_Msg();
        time->m_talktime=QDateTime::currentDateTime();
        time->m_msgType=show_type_enum::SHOW_TYPE_TIME;
        this->m_msgList.push_back(time);
        if(m_chatManager->getCurItem()==this)
        {
            ChatContentRound* msgWidget=new ChatContentRound();
            msgWidget->settalkTime(time->m_talktime);
            msgWidget->resize(m_chatManager->getChatListWidget()->width()-25,msgWidget->getwindowHeight());
            msgWidget->run(time->m_msgType);
            QListWidgetItem* item=new QListWidgetItem(m_chatManager->getChatListWidget());
            item->setSizeHint(msgWidget->size());
            m_chatManager->getChatListWidget()->setItemWidget(item,msgWidget);
        }
    }
    this->m_msgList.push_back(oneMsg);

    if(m_chatManager->getCurItem()==this)
    {
        qDebug()<<"-----------m_chatManager->getCurItem()==this--------";
        ChatContentRound* msgWidget=new ChatContentRound();
        msgWidget->setuserIconName(oneMsg->m_icon);
        msgWidget->setuserChatContent(oneMsg->m_content);
        msgWidget->resize(m_chatManager->getChatListWidget()->width()-25,msgWidget->getwindowHeight());
        msgWidget->run(oneMsg->m_msgType);
        QListWidgetItem* item=new QListWidgetItem(m_chatManager->getChatListWidget());
        item->setSizeHint(msgWidget->size());
        m_chatManager->getChatListWidget()->setItemWidget(item,msgWidget);
    }
    if(m_chatManager->getCurItem()!=this||!ClientManager::getInstance()->getMainWindow()->curButton_Msg())
    {

        //产生一个未读消息
        emit unReadMsg(1);
        emit ClientManager::getInstance()->getMainWindow()->unReadMsg(1);
    }



}

ChatShowItem::~ChatShowItem()
{
    qDebug()<<"---------------~ChatShowItem---------";
    for(auto i:m_msgList)
    {
        delete i;
    }
    delete ui;
}
