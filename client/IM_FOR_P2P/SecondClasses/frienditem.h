#ifndef FRIENDITEM_H
#define FRIENDITEM_H

#include <QWidget>
#include "userinfo.h"
#include "showuserinfo.h"
#include "friendmanager.h"

namespace Ui {
class FriendItem;
}

class UserInfo;
class ShowUserInfo;
class FriendManager;

class FriendItem : public QWidget
{
    Q_OBJECT

public:
    explicit FriendItem(FriendManager* friendManager,UserInfo* friendInfo,QWidget *parent = nullptr);
    ~FriendItem();
    void setItemTyep(int type){m_itemType=type;}
    int getItemType()const{return m_itemType;}
    UserInfo* getFriendInfo(){return m_friendInfo;}
    void setShowUserInfo(ShowUserInfo* showuserInfo){m_showUserInfo=showuserInfo;}
    ShowUserInfo* getShowUserInfo(){return m_showUserInfo;}
    void setOnline(int& is){m_online=is;}
    void setOnline();

protected:
    virtual void mousePressEvent(QMouseEvent *) override;
signals:
    //void pressed();    //按压信号

private:
    Ui::FriendItem *ui;
    UserInfo *m_friendInfo;
    ShowUserInfo* m_showUserInfo;
    int m_itemType;  //类型
    FriendManager* m_friendManager;
    int m_online;    //标识是否在线
};

#endif // FRIENDITEM_H
