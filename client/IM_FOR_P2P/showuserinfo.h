#ifndef SHOWUSERINFO_H
#define SHOWUSERINFO_H

#include <QWidget>
#include "clientmanager.h"
#include "SecondClasses/userinfo.h"
#include "SecondClasses/userinfo.h"

namespace Ui {
class ShowUserInfo;
}

class UserInfo;

class ShowUserInfo : public QWidget
{
    Q_OBJECT

public:
    explicit ShowUserInfo(QWidget *parent = nullptr);
    ~ShowUserInfo();
    void showInfo(UserInfo* userInfo);
    UserInfo *getUserInfo(){return m_userInfo;}
    QPushButton* getAddORChat();
    QWidget* getSubWidget();
    QPushButton* getAgree();
    QPushButton* getDisagree();
    void clickAddOrChat();
    void setState(int state){m_state=state;}
    int& getState(){return m_state;}

private:
    //ClientManager* m_clientManager;
    UserInfo *m_userInfo;
    Ui::ShowUserInfo *ui;
    int m_state=-1;   //标记是添加好友还是发送消息

signals:
    void clickAdd(int&);
    void clickSend(int&);
};

#endif // SHOWUSERINFO_H
