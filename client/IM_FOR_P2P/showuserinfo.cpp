#include "showuserinfo.h"
#include "ui_showuserinfo.h"
#include <QDebug>

ShowUserInfo::ShowUserInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowUserInfo)
{
    ui->setupUi(this);

    //connect(ui->addORchat,&QPushButton::click,this,&ShowUserInfo::clickAddOrChat);
    //隐藏按钮
    ui->addORchat->hide();
    ui->agreeButton->hide();
    ui->disagreeButton->hide();

    //
    connect(ui->addORchat,&QPushButton::clicked,this,&ShowUserInfo::clickAddOrChat);
}

QPushButton* ShowUserInfo::getAgree()
{
    return ui->agreeButton;
}
QPushButton* ShowUserInfo::getDisagree()
{
    return ui->disagreeButton;
}

void ShowUserInfo::showInfo(UserInfo* userInfo)
{
    m_userInfo=userInfo;
    //显示用户头像
    char icon[2]="1";
    if(strcmp(userInfo->icon,icon)==0)
    {
        if(userInfo->sex==1)
        {

            ui->userIcon->setPixmap(QPixmap(":/Resource/Images/userIcon.png"));
            ui->userIcon->setScaledContents(true);
        }
        else
        {
            ui->userIcon->setPixmap(QPixmap(":/Resource/Images/userIconF.png"));
            ui->userIcon->setScaledContents(true);
        }
    }
    //备注
    if(userInfo->remarkName!="")
    {
        ui->remarkName->setText(QString::fromStdString(userInfo->remarkName));
    }
    //用户ID
    ui->userID->setText(QString::number(userInfo->userID));
    //用户名
    ui->userName->setText(QString::fromStdString(userInfo->nickName));
    //用户性别
    if(1==userInfo->sex)
    {
        ui->userName->setIcon(QIcon(":/Resource/Images/sexM.png"));
    }else
    {
        ui->userName->setIcon(QIcon(":/Resource/Images/sexF.png"));
    }
    ui->userName->setIconSize(QSize(16,16));

    //用户签名
    if(userInfo->userSign!=" ")
        ui->userSign->setText(QString::fromStdString(userInfo->userSign));
    //电话号吗
    ui->phone->setText(QString::fromStdString(userInfo->phoneNum));

}

QWidget* ShowUserInfo::getSubWidget()
{
    return ui->widget;
}
QPushButton* ShowUserInfo::getAddORChat()
{
    return ui->addORchat;
}

void ShowUserInfo::clickAddOrChat()
{
    qDebug()<<"--------ShowUserInfo::clickAddOrChat-----------";
    if(m_state==-1) return ;
    //添加好友
    if(m_state==1)
    {
        this->hide();
        emit clickAdd(m_userInfo->userID);
    }

    //发送消息
    if(m_state==2)
    {
        this->hide();
        emit clickSend(m_userInfo->userID);
    }

}

ShowUserInfo::~ShowUserInfo()
{
    delete ui;
}
