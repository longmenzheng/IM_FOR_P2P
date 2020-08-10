#ifndef FRIENDMANAGER_H
#define FRIENDMANAGER_H

#include <QWidget>
#include "clientmanager.h"

namespace Ui {
class FriendManager;
}
class ClientManager;
class FriendManager : public QWidget
{
    Q_OBJECT
private:
    ClientManager *clientManager;
public:
    explicit FriendManager(QWidget *parent = nullptr);
    FriendManager(ClientManager* manager,QWidget *parent = nullptr);
    ~FriendManager();
    bool init();
    void clickMsg();
    void clickGroup();

signals:
    void clickMsgSignal();
    //void clickFriendSignal();
    void clickGroupSignal();

private:
    Ui::FriendManager *ui;
};

#endif // FRIENDMANAGER_H
