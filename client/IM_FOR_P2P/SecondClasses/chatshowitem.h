#ifndef CHATSHOWITEM_H
#define CHATSHOWITEM_H

#include <QWidget>
#include "chatmanager.h"
#include <list>
#include "chatcontentround.h"

namespace Ui {
class ChatShowItem;
}

class ChatManager;
class ChatContentRound;

struct One_Msg{               //每一条消息
    QString m_icon;           //头像路径
    QString m_userNickname;
    QString m_content;        //消息内容
    QDateTime m_talktime;
    show_type_enum m_msgType;   //消息类型
};

class ChatShowItem : public QWidget
{
    Q_OBJECT

public:
    explicit ChatShowItem(QWidget *parent = nullptr);
    ChatShowItem(int chatId,QString& icon,QString& userNickname,ChatManager* chatManager,QWidget *parent = nullptr);
    ~ChatShowItem();
    int& getChaterID(){return m_chaterID;}
    QString& getIcon(){return m_icon;}
    QString& getUserNickname(){return m_userNickname;}
    ChatManager* getChatManager(){return m_chatManager;}

    void setChaterID(int& id){m_chaterID=id;}
    void setIcon(QString& icon){m_icon=icon;}
    void setUserNickname(QString& nickname){m_userNickname=nickname;}
    void setChatManager(ChatManager* chatManager){m_chatManager=chatManager;}

    void clickDelChatButton();  //delchat按钮槽函数
    void run();                 //将值赋值到相应控件上，绘制整个item
    void addOneMsg(One_Msg&);   //添加一条消息
    void mouseClick();
protected:
    //鼠标移入、移出、点击事件
    void enterEvent(QEvent *event) override;
    void leaveEvent(QEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;


private:
    Ui::ChatShowItem *ui;
    int m_chaterID;         //聊天对象的ID
    QString m_icon;         //头像路径
    QString m_userNickname;
    ChatManager *m_chatManager;
    std::list<One_Msg*> m_msgList;


};

#endif // CHATSHOWITEM_H
