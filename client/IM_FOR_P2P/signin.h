#ifndef SIGNIN_H
#define SIGNIN_H

#include <QWidget>
#include "clientmanager.h"

namespace Ui {
class SignIn;
}

class ClientManager;

class SignIn : public QWidget
{
    Q_OBJECT

private:
    ClientManager *clientManager;
public:
    explicit SignIn(QWidget *parent = nullptr);
    SignIn(ClientManager *manager,QWidget *parent = nullptr);
    ~SignIn();
    bool init();
    void clickSignIn();
    void clickSignUp();

signals:
    void clickSignInSignal();
    void clickSignUpSignal();

private:
    Ui::SignIn *ui;
};

#endif // SIGNIN_H
