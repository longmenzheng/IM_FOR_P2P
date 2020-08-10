#ifndef GROUPMANAGER_H
#define GROUPMANAGER_H

#include <QWidget>
#include "clientmanager.h"

namespace Ui {
class GroupManager;
}
class ClientManager;

class GroupManager : public QWidget
{
    Q_OBJECT
private:
    ClientManager * clientManager;
public:
    explicit GroupManager(QWidget *parent = nullptr);
    GroupManager(ClientManager* manager,QWidget *parent = nullptr);
    ~GroupManager();
    bool init();
    void clickMsg();
    void clickFriend();


signals:
    void clickMsgSignal();
    void clickFriendSignal();
    //void clickGroupSignal();

private:
    Ui::GroupManager *ui;
};

#endif // GROUPMANAGER_H
