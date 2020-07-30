#ifndef SIGNUP_H
#define SIGNUP_H

#include <QWidget>
#include "clientmanager.h"


namespace Ui {
class SignUp;
}

class ClientManager;

class SignUp : public QWidget
{
    Q_OBJECT
private:
    ClientManager *clientManager;

public:
    explicit SignUp(QWidget *parent = nullptr);
    SignUp(ClientManager *manager,QWidget *parent=nullptr);
    ~SignUp();
    bool init();
    void clickSignIn();
    void clickSignUp();

signals:
    void clickSignInSignal();
    void clickSignUpSignal();

private:
    Ui::SignUp *ui;
};

#endif // SIGNUP_H
