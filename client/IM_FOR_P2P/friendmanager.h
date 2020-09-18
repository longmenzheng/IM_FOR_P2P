#ifndef FRIENDMANAGER_H
#define FRIENDMANAGER_H

#include <QWidget>
#include <QListWidgetItem>
#include "clientmanager.h"
#include "SecondClasses/relationmanage.h"
#include "SecondClasses/frienditem.h"
#include "Msg/LoadFriendInfo.pb.h"
#include "showuserinfo.h"
#include "netobserver.h"
#include <map>

namespace Ui {
class FriendManager;
}
class ClientManager;
class FriendItem;
class ShowUserInfo;


class FriendManager : public QWidget,public RelationManage,public NetObserver
{
    Q_OBJECT
private:
    ClientManager *clientManager;
public:
    explicit FriendManager(QWidget *parent = nullptr);
    FriendManager(ClientManager* manager,QWidget *parent = nullptr);
    ~FriendManager();
    bool init();
    void clickSearchButton();

    void modify() override;
    void add(int &) override;
    bool searchBuilded(QString&) override;
    bool searchNoBuild(QString&) override;
    void del(int &) override;
    std::map<int,FriendItem*>* getFriendsMap(){return &m_friendsMap;}
    void toChat(int&);
    void toAgree();
    void toDisagree();
    void finshAgree(int);
    void finshDisagree(int);
    void finshPeerAgree(int);
    void finshPeerDisagree(int);
    void recvMsg(const char *msg) override;
    void initListWidget();
    void selectedItem(int);
    FriendItem* getFriendItem(int& id);
    void insertItem(IM::LoadFriendInfo*);

    void emitPeerOnlineSignal(int& id){emit peerOnline(id);}



signals:
    void clickMsgSignal();
    //void clickFriendSignal();
    void clickGroupSignal();
    void agreeAdd(int);
    void disagreeAdd(int);
    void peerOnline(int); //好友上线信号
    void peerAgreeAdd(int); //对方同意添加好友
    void peerDisagreeAdd(int);


private:
    Ui::FriendManager *ui;
    std::map<int,QListWidgetItem*> m_itemMap;
    std::list<IM::LoadFriendInfo*> m_userInfoList;
    std::map<int,FriendItem*> m_friendsMap;  //key位朋友ID
    std::map<int,FriendItem*> m_addPeerMap;    //自己添加别人等待同意
    std::map<int,FriendItem*> m_peerAddMap;    //别人申请添加自己
    ShowUserInfo *m_showUserInfo;
    int m_flag=-1;  //消息发送是否成功的标记



};

#endif // FRIENDMANAGER_H
