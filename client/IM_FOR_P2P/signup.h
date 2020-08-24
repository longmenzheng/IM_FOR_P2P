#ifndef SIGNUP_H
#define SIGNUP_H

#include <QWidget>
#include "clientmanager.h"
#include "netobserver.h"


namespace Ui {
class SignUp;
}

class ClientManager;

class SignUp : public QWidget,public NetObserver
{
    Q_OBJECT
private:
    ClientManager *clientManager;
    int state=-1;

public:
    explicit SignUp(QWidget *parent = nullptr);
    SignUp(ClientManager *manager,QWidget *parent=nullptr);
    ~SignUp();
    bool init();
    void clickSignIn();
    void clickSignUp();
    void recvMsg(const char *msg) override;

signals:
    void clickSignInSignal();
    void clickSignUpSignal();

private:
    Ui::SignUp *ui;
    bool signUpButtonState=false;
};

#endif // SIGNUP_H
