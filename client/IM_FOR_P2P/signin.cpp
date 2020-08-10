#include "signin.h"
#include "signup.h"
#include "ui_signin.h"
#include "network.h"
#include "Msg/SignIn.pb.h"
#include <QString>
#include <QDebug>

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
    ui->forgetPD->setStyleSheet("color:green");
}

bool SignIn::init()
{
    //this->setWindowTitle(QString("登录"));
    connect(ui->signIn,&QPushButton::released,this,&SignIn::clickSignIn);   //登录按钮被点击时发送信号clickSignInSignal
    connect(ui->signUp,&QPushButton::released,this,&SignIn::clickSignUp);   //注册按钮被点击时发送信号clickSignUpSignal
    //处理注册界面发出的clickSignInSignal信号
    //qDebug()<<clientManager->getSignUp();
    connect(clientManager->getSignUp(),&SignUp::clickSignInSignal,this,[=](){
        this->show();
    });




    return true;
}


void SignIn::recvMsg(const char *msg)
{
    int msgType=-1;
    int msgID=-1;
    //格式：接收者ID\n发送者ID\n消息ID\n消息类型\n消息内容长度\n消息内容
    sscanf(msg,"%*d\n%*d\n%d\n%d\n",&msgID,&msgType);  //获取消息ID 消息类型
    if(MsgType::SIGNIN==msgType)
    {
        int msgType=-1;
        int msgID=-1;
        int sendID=-1;
        int contentLen=-1;
        char tmp[1024]={0};

        //格式：接收者ID\n发送者ID\n消息ID\n消息类型\n消息内容长度\n消息内容
        sscanf(msg,"%*d\n%d\n%d\n%d\n%d\n",&sendID,&msgID,&msgType,&contentLen);  //获取消息ID 消息类型
        const char *p=msg;
        for(int i=0,flag=0;flag!=5;++i)
        {
             if(*p++ =='\n')
                  ++flag;
        }
        memcpy(tmp,p,contentLen);
        IM::SignIn res;
        res.ParseFromArray((void*)tmp,contentLen);
        if(res.state()==1)
        {
            qDebug()<<"-------------登录成功----------";
            //注册成功
            state=1;
        }else if(res.state()==2)
        {
            qDebug()<<"-------------登录失败----------";
            //注册失败
            state=2;
        }

    }
}

void SignIn::clickSignIn()
{
    ui->note->setText("");
    //输入校验
    QString idOrPhone=ui->userID->text();
    QString passwd=ui->password->text();
    if(idOrPhone==""||passwd==""
            ||idOrPhone.length()<5||passwd.length()<6)
    {
        ui->note->setText(QString("请填写正确信息"));
        ui->note->setStyleSheet("color:red");
        return;
    }

    //验证用户信息
    IM::SignIn signIn;
    signIn.set_networktype(MsgType::SIGNIN);
    if(idOrPhone.length()==11)
    {
        signIn.set_phone(idOrPhone.toStdString());
        signIn.set_sendid((int)(idOrPhone.toDouble()/100));
    }else
    {
        signIn.set_sendid(idOrPhone.toInt());
    }
    signIn.set_password(passwd.toStdString());

    Network::getInstance()->addObserver(this);
    Network::getInstance()->addMsg<IM::SignIn>(signIn);
    //...
    while (1) {
        if(state==1)
        {
            //登录成功
            ui->userID->setText("");
            ui->password->setText("");
            ui->note->setText(QString("登录成功"));
            ui->note->setStyleSheet("color:green;");
            this->hide();                //隐藏自己并发送登录被按下信号
            emit clickSignInSignal();
            break;
        }else if(state==2)
        {
            //登录失败
            ui->note->setText(QString("用户名或密码错误！"));
            ui->note->setStyleSheet("color:red;");
            break;
        }
    }

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
