#include "signup.h"
#include "ui_signup.h"
#include "signin.h"
#include "SignUp.pb.h"
#include "network.h"
#include <QDebug>

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
    ui->protolabel->setStyleSheet("color:green");
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
    Network::getInstance()->eraseObserver(this);//窗口隐藏，网络监听取消
    this->hide();
    emit clickSignInSignal();
}

void SignUp::clickSignUp()
{
    ui->note->setText("");
    //判断用户名格式是否正确
    QString nickname=ui->nickname->text();
    QString phone=ui->phone->text();
    QString passwdOne=ui->passwdOne->text();
    QString passwdTow=ui->passwdTow->text();
    //qDebug()<<phone<<"int:"<<(int)(phone.toDouble()/10);
    if(nickname.toLocal8Bit().length()>30||nickname=="")
    {
        //太长
        ui->note->setText(QString("用户名为空或太长了！"));
        ui->note->setStyleSheet("color:red;");
        return;
    }
    //判断性别是否选择
    if(ui->comboBox->currentIndex()==0)
    {
        ui->note->setText(QString("请选择性别！"));
        ui->note->setStyleSheet("color:red;");
        return;
    }

    //判断手机号格式
    if(phone.length()!=11||!phone.contains(QRegExp("^\\d+$"))||phone=="")
    {
        ui->note->setText(QString("手机号格式不对！"));
        ui->note->setStyleSheet("color:red;");
        return;
    }

    //判断两次密码是否一致
    if(passwdOne.compare(passwdTow)!=0||passwdOne==""||passwdTow=="")
    {
        ui->note->setText(QString("密码为空或两次输入不一致！"));
        ui->note->setStyleSheet("color:red;");
        return;
    }

    //未同意用户协议
    if(Qt::Unchecked==ui->checkBox->checkState())
    {
        ui->note->setText(QString("请同意用户协议!"));
        ui->note->setStyleSheet("color:red;");
        return;
    }
    IM::SignUp signupData;
    signupData.set_networktype(MsgType::SIGNUP);
    signupData.set_recvid(0);//服务器接收
    signupData.set_nickname(nickname.toStdString());
    signupData.set_sendid((int)(phone.toDouble()/100));
    signupData.set_sex(ui->comboBox->currentIndex());
    signupData.set_password(passwdOne.toStdString());
    signupData.set_phone(phone.toStdString());


    Network::getInstance()->addObserver(this);
    Network::getInstance()->addMsg<IM::SignUp>(signupData);

    while(1)
    {
        if(state==1)
        {
            //注册成功
            ui->nickname->setText("");
            ui->comboBox->setCurrentIndex(0);
            ui->phone->setText("");
            ui->passwdOne->setText("");
            ui->passwdTow->setText("");
            ui->checkBox->setCheckState(Qt::Unchecked);
            ui->note->setText(QString("注册成功！去登录吧"));
            ui->note->setStyleSheet("color:green;");
            break;
        }else if(state==2)
        {
            //注册失败
            ui->note->setText(QString("注册失败！该手机号已注册或注册出错"));
            ui->note->setStyleSheet("color:red;");
            break;
        }
    }


}
void SignUp::recvMsg(const char *msg)
{
    int msgType=-1;
    int msgID=-1;
    //格式：接收者ID\n发送者ID\n消息ID\n消息类型\n消息内容长度\n消息内容
    sscanf(msg,"%*d\n%*d\n%d\n%d\n",&msgID,&msgType);  //获取消息ID 消息类型
    if(MsgType::SIGNUP==msgType)
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
        IM::SignUp res;
        res.ParseFromArray((void*)tmp,contentLen);
        if(res.state()==1)
        {
            //注册成功
            state=1;
        }else
        {
            //注册失败
            state=2;
        }

    }
}

SignUp::~SignUp()
{
    Network::getInstance()->eraseObserver(this);
    delete ui;
}
