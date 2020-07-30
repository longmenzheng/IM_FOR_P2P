#include "signin.h"
#include "signup.h"
#include "ui_signin.h"
//#include <QDebug>

SignIn::SignIn(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignIn)
{
    ui->setupUi(this);
}

SignIn::SignIn(ClientManager *manager,QWidget *parent):
    QWidget(parent),
    clientManager(manager),
    ui(new Ui::SignIn)
{
    ui->setupUi(this);
}

bool SignIn::init()
{
    this->setWindowTitle(QString("登录"));
    connect(ui->signIn,&QPushButton::released,this,&SignIn::clickSignIn);   //登录按钮被点击时发送信号clickSignInSignal
    connect(ui->signUp,&QPushButton::released,this,&SignIn::clickSignUp);   //注册按钮被点击时发送信号clickSignUpSignal
    //处理注册界面发出的clickSignInSignal信号
    //qDebug()<<clientManager->getSignUp();
    connect(clientManager->getSignUp(),&SignUp::clickSignInSignal,this,[=](){
        this->show();
    });




    return true;
}

void SignIn::clickSignIn()
{
    this->hide();                //隐藏自己并发送登录被按下信号

    //写登录相关逻辑
    //...
    emit clickSignInSignal();
}
void SignIn::clickSignUp()
{
    this->hide();                //隐藏自己并发送注册被按下信号
    emit clickSignUpSignal();
}


SignIn::~SignIn()
{
    delete ui;
}
