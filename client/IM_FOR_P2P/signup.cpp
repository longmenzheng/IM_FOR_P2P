#include "signup.h"
#include "ui_signup.h"
#include "signin.h"
//#include <QDebug>

SignUp::SignUp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
}
SignUp::SignUp(ClientManager *manager,QWidget *parent):
    QWidget(parent),
    clientManager(manager),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

bool SignUp::init()
{
    //监听登录界面发出的clickSignUpSignal信号
    connect(clientManager->getSignIn(),&SignIn::clickSignUpSignal,[=](){
        this->show();
    });
    //当注册界面登录按钮被点击时发出clickSignInSignal信号
    connect(ui->signIn,&QPushButton::released,this,&SignUp::clickSignIn);
    connect(ui->signUp,&QPushButton::released,this,&SignUp::clickSignUp);
    //qDebug()<<this;

    return true;
}
void SignUp::clickSignIn()
{
    this->hide();
    emit clickSignInSignal();
    //qDebug()<<"什么问题";
}

void SignUp::clickSignUp()
{
    //写注册相关逻辑
    //...
}

SignUp::~SignUp()
{
    delete ui;
}
