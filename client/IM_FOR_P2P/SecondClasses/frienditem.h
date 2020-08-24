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
    void setShowUserInfo(ShowUserInfo* showuserInfo){m_showUserInfo=showuserInfo;}
    ShowUserInfo* getShowUserInfo(){return m_showUserInfo;}
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
};

#endif // FRIENDITEM_H
