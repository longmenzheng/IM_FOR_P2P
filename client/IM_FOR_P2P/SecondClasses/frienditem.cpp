#include "frienditem.h"
#include "ui_frienditem.h"
#include "getinfo.h"
#include <QDebug>

FriendItem::FriendItem(FriendManager* friendManager,UserInfo* friendInfo,QWidget *parent):
    QWidget(parent),
    ui(new Ui::FriendItem),
     m_friendInfo(friendInfo),
     m_friendManager(friendManager)
{
    ui->setupUi(this);

            if(friendInfo->sex==1)
            {

                ui->userIcon->setPixmap(QPixmap(":/Resource/Images/userIcon.png"));
                ui->userIcon->setScaledContents(true);
            }
            else
            {
                ui->userIcon->setPixmap(QPixmap(":/Resource/Images/userIconF.png"));
                ui->userIcon->setScaledContents(true);
            }


    if(friendInfo->remarkName!="")
    {
        ui->nickname->setText(QString::fromStdString(friendInfo->remarkName));
    }else
    {
        ui->nickname->setText(QString::fromStdString(friendInfo->nickName));
    }


}
void FriendItem::setOnline()
{
    ui->flag->setText(QString("[---]"));
    ui->flag->setStyleSheet("color:gray");
    if(m_online==1)
    {
        ui->flag->setText(QString("[在线]"));
        ui->flag->setStyleSheet("color:green");
    }else if(m_online==0)
    {
        ui->flag->setText(QString("[离线]"));
        ui->flag->setStyleSheet("color:gray");

    }
    qDebug()<<"+++++++++++m_online="<<m_online<<"++++++++++++++";
}

void FriendItem::mousePressEvent(QMouseEvent *)
{

    qDebug()<<"---------mousePressEvent-----"<<this->m_itemType;
    GetInfo::getInstance()->getInfo(m_friendInfo);
    m_showUserInfo->showInfo(m_friendInfo);
    m_showUserInfo->show();
    if(1==m_itemType)   //你添加别人，等待同意
    {
        m_showUserInfo->getAddORChat()->hide();
        m_showUserInfo->getAgree()->hide();
        m_showUserInfo->getDisagree()->hide();
    }
    if(2==m_itemType)  //别人添加你,等待同意
    {
        m_showUserInfo->getAddORChat()->hide();
        m_showUserInfo->getAgree()->show();
        m_showUserInfo->getDisagree()->show();
    }
    if(3==m_itemType)  //好友，显示聊天按钮
    {
        m_showUserInfo->getAgree()->hide();
        m_showUserInfo->getDisagree()->hide();
        m_showUserInfo->getAddORChat()->show();
        m_showUserInfo->getAddORChat()->setText(QString("发消息"));
        m_showUserInfo->getAddORChat()->setIcon(QIcon(":/Resource/Images/chatRecordYES.png"));
        m_showUserInfo->setState(2); //表示是搜索到的信息显示

    }

    m_friendManager->selectedItem(m_showUserInfo->getUserInfo()->userID);

}

FriendItem::~FriendItem()
{
    qDebug()<<"---------------FriendItem析构被调-------------";
    delete m_friendInfo;
    delete ui;
}
