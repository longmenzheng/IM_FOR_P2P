#ifndef SIGNIN_H
#define SIGNIN_H

#include <QWidget>
#include "clientmanager.h"
#include "netobserver.h"

namespace Ui {
class SignIn;
}

class ClientManager;

class SignIn : public QWidget,public NetObserver
{
    Q_OBJECT

private:
    ClientManager *clientManager;
    int state=-1;
public:
    explicit SignIn(QWidget *parent = nullptr);
    SignIn(ClientManager *manager,QWidget *parent = nullptr);
    ~SignIn();
    bool init();
    void clickSignIn();
    void clickSignUp();
    void recvMsg(const char *msg) override;

signals:
    void clickSignInSignal();
    void clickSignUpSignal();

private:
    Ui::SignIn *ui;
};

#endif // SIGNIN_H
