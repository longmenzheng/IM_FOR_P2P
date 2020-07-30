#ifndef CHATMANAGER_H
#define CHATMANAGER_H

#include <QWidget>
#include "clientmanager.h"

namespace Ui {
class ChatManager;
}

class ClientManager;

class ChatManager : public QWidget
{
    Q_OBJECT
private:
    ClientManager *clientManager;
public:
    explicit ChatManager(QWidget *parent = nullptr);
    ChatManager(ClientManager* manager,QWidget *parent = nullptr);
    ~ChatManager();
    bool init();
    //void clickMsg();
    void clickFriend();
    void clickGroup();

signals:
    //void clickMsgSignal();
    void clickFriendSignal();
    void clickGroupSignal();
private:
    Ui::ChatManager *ui;
};

#endif // CHATMANAGER_H
