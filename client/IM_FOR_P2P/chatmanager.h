#ifndef CHATMANAGER_H
#define CHATMANAGER_H

#include <QWidget>
#include "clientmanager.h"
#include "SecondClasses/chatshowitem.h"
#include "netobserver.h"
#include "Msg/ChatMsg.pb.h"

namespace Ui {
class ChatManager;
}

class ClientManager;
class ChatShowItem;
class NetObserver;

class ChatManager : public QWidget,public NetObserver
{
    Q_OBJECT
private:
    ClientManager *clientManager;
public:
    explicit ChatManager(QWidget *parent = nullptr);
    ChatManager(ClientManager* manager,QWidget *parent = nullptr);
    ~ChatManager();
    bool init();
    void setNoCaht();
    void addItem(ChatShowItem* item);
    void setCurItem(ChatShowItem* curItem);  //设置聊天
    QListWidget *getShowListWidget();
    QListWidget *getChatListWidget();
    ChatShowItem* getCurItem(){return m_curItem;}

    void recvMsg(const char *msg) override;
    void handleMsg(IM::ChatMsg*);
    void clickSendButton();



signals:
    void delitem(int);
    void msgSignal(IM::ChatMsg*);//接收到消息后给主线程发送消息，会涉及画面更新，让主线程处理

private:
    Ui::ChatManager *ui;
    ChatShowItem* m_curItem;  //当前正在聊天的对象
    std::map<int,QListWidgetItem*> m_itemMap;
    std::map<int,ChatShowItem*> m_chatShowItemMap;


};

#endif // CHATMANAGER_H
