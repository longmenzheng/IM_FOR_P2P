#ifndef SHOWUSERINFO_H
#define SHOWUSERINFO_H

#include <QWidget>
#include "clientmanager.h"
#include "SecondClasses/userinfo.h"

namespace Ui {
class ShowUserInfo;
}

class ShowUserInfo : public QWidget
{
    Q_OBJECT

public:
    explicit ShowUserInfo(ClientManager* clientManager,QWidget *parent = nullptr);
    ~ShowUserInfo();
    void showInfo(UserInfo* userInfo);

private:
    ClientManager* m_clientManager;
    Ui::ShowUserInfo *ui;
};

#endif // SHOWUSERINFO_H
