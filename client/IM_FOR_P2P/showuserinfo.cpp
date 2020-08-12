#include "showuserinfo.h"
#include "ui_showuserinfo.h"

ShowUserInfo::ShowUserInfo(ClientManager* clientManager,QWidget *parent) :
    QWidget(parent),
    m_clientManager(clientManager),
    ui(new Ui::ShowUserInfo)
{
    ui->setupUi(this);
}

void ShowUserInfo::showInfo(UserInfo* userInfo)
{
    //显示用户头像
    char icon[2]="1";
    if(strcmp(m_clientManager->getUserInfo()->icon,icon)==0)
    {
        if(m_clientManager->getUserInfo()->sex==1)
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
    if(userInfo->remarkName!="")
    {
        ui->remarkName->setText(QString::fromStdString(userInfo->remarkName));
    }
    ui->userID->setText(QString::number(userInfo->userID));
    ui->userName->setText(QString::fromStdString(userInfo->nickName));
    ui->userSign->setText(QString::fromStdString(userInfo->userSign));
    ui->phone->setText(QString::fromStdString(userInfo->phoneNum));
}

ShowUserInfo::~ShowUserInfo()
{
    delete ui;
}
