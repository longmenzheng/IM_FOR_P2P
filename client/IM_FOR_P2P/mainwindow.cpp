#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

void changeIconNO(Ui::MainWindow* ui,QPushButton* button); //将图标切换到未点击状态
void changeIconYES(Ui::MainWindow* ui,QPushButton* button);//将图标切换到已点击状态

MainWindow::MainWindow(ClientManager *clientManager,QWidget *parent)
    :QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,m_clientManager(clientManager)
    ,m_stackedWidget(new QStackedWidget(this))
    ,m_chatManager(new ChatManager(m_clientManager))
    ,m_friendManager(new FriendManager(m_clientManager))
    ,m_groupManager(new GroupManager(m_clientManager))
    ,m_showUserInfo(new ShowUserInfo(m_clientManager))
{
    ui->setupUi(this);

}

void MainWindow::init()
{
    //界面设置
    ui->leftBG->setStyleSheet("background:rgb(62, 62, 91)");

    ui->msgButton->setIcon(QIcon(":/Resource/Images/chatNO.png"));
    ui->msgButton->setIconSize(QSize(32,32));

    ui->friendButton->setIcon(QIcon(":/Resource/Images/friendNO.png"));
    ui->friendButton->setIconSize(QSize(32,32));

    ui->groupButton->setIcon(QIcon(":/Resource/Images/groupNO.png"));
    ui->groupButton->setIconSize(QSize(32,32));

    ui->setting->setIcon((QIcon(":/Resource/Images/settingNO.png")));
    ui->setting->setIconSize(QSize(32,32));

    ui->quit->setIcon(QIcon(":/Resource/Images/quitNO.png"));
    ui->quit->setIconSize(QSize(32,32));

    m_stackedWidget->setGeometry(60,0,740,600);
    m_stackedWidget->addWidget(m_showUserInfo);
    m_stackedWidget->addWidget(m_chatManager);
    m_stackedWidget->addWidget(m_friendManager);
    m_stackedWidget->addWidget(m_groupManager);
    m_stackedWidget->setCurrentIndex(0);
    m_stackedWidget->raise();    //将窗口放到顶层 不然无法获取任何焦点
    //((ChatManager*)m_stackedWidget->currentWidget())->init();
    this->setWindowTitle(QString("个人信息"));

    //信号与槽绑定
    //---1.从登录界面进入主界面
    connect(m_clientManager->getSignIn(),&SignIn::clickSignInSignal,this,&MainWindow::inMainWindow);

    //---2.点击个人头像
    connect(ui->userIcon,&QPushButton::pressed,this,&MainWindow::clickShowInfo);

    //---3.点击聊天按钮
    connect(ui->msgButton,&QPushButton::pressed,this,&MainWindow::clickChatButton);

    //---4.点击好友按钮
    connect(ui->friendButton,&QPushButton::pressed,this,&MainWindow::clickFriendButton);

    //---5.点击群按钮
    connect(ui->groupButton,&QPushButton::pressed,this,&MainWindow::clickGroupButton);

    //---6.点击设置按钮
    connect(ui->setting,&QPushButton::pressed,this,&MainWindow::clickSettingButton);

    //---7.点击退出按钮
    connect(ui->quit,&QPushButton::pressed,this,&MainWindow::clickQuitButton);


}

void MainWindow::inMainWindow()
{
    //显示用户头像
    char icon[2]="1";
    qDebug()<<"---sex:"<<m_clientManager->getUserInfo()->sex;
    qDebug()<<"---icon:"<<m_clientManager->getUserInfo()->icon;
    if(strcmp(m_clientManager->getUserInfo()->icon,icon)==0)
    {
        //根据性别有不同的显示
        if(m_clientManager->getUserInfo()->sex==1)
        {
            ui->userIcon->setIcon(QIcon(":/Resource/Images/userIcon.png"));
            ui->userIcon->setIconSize(QSize(50,50));
        }
        else
        {
            ui->userIcon->setIcon(QIcon(":/Resource/Images/userIconF.png"));
            ui->userIcon->setIconSize(QSize(50,50));
        }
    }
    m_showUserInfo->showInfo(m_clientManager->getUserInfo());
    m_currentButton=ui->userIcon;
    this->show();

}


void MainWindow::clickShowInfo()
{
    //切换窗口
    if(m_currentButton!=ui->userIcon)
    {
        changeIconNO(this->ui,m_currentButton);
        m_currentButton=ui->userIcon;
        changeIconYES(this->ui,m_currentButton);

        m_stackedWidget->setCurrentWidget(m_showUserInfo);
        this->setWindowTitle(QString("个人信息"));
    }
}
void MainWindow::clickChatButton()
{
    //切换按钮显示效果
    if(m_currentButton!=ui->msgButton)
    {
        changeIconNO(this->ui,m_currentButton);
        m_currentButton=ui->msgButton;
        changeIconYES(this->ui,m_currentButton);

        m_stackedWidget->setCurrentWidget(m_chatManager);
        this->setWindowTitle(QString("聊天"));
    }

}
void MainWindow::clickFriendButton()
{
    //切换按钮显示效果
    if(m_currentButton!=ui->friendButton)
    {
        changeIconNO(this->ui,m_currentButton);
        m_currentButton=ui->friendButton;
        changeIconYES(this->ui,m_currentButton);

        m_stackedWidget->setCurrentWidget(m_friendManager);
        this->setWindowTitle(QString("好友"));
    }
}
void MainWindow::clickGroupButton()
{
    //切换按钮显示效果
    if(m_currentButton!=ui->groupButton)
    {
        changeIconNO(this->ui,m_currentButton);
        m_currentButton=ui->groupButton;
        changeIconYES(this->ui,m_currentButton);

        m_stackedWidget->setCurrentWidget(m_groupManager);
        this->setWindowTitle(QString("群组"));
    }
}
void MainWindow::clickSettingButton()
{
    //切换按钮显示效果
    if(m_currentButton!=ui->setting)
    {
        changeIconNO(this->ui,m_currentButton);
        //m_stackedWidget->setCurrentWidget(m_showUserInfo);
        m_currentButton=ui->setting;
        changeIconYES(this->ui,m_currentButton);

        this->setWindowTitle(QString("设置"));
    }
}
void MainWindow::clickQuitButton()
{
    //切换按钮显示效果
    if(m_currentButton!=ui->quit)
    {
        changeIconNO(this->ui,m_currentButton);
        //m_stackedWidget->setCurrentWidget(m_showUserInfo);
        m_currentButton=ui->quit;
        changeIconYES(this->ui,m_currentButton);

        this->setWindowTitle(QString("退出"));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void changeIconNO(Ui::MainWindow* ui,QPushButton* button)
{
    if(button==ui->userIcon)
    {
        return;
    }
    if(button==ui->msgButton)
    {
        button->setIcon(QIcon(":/Resource/Images/chatNO.png"));
        return;
    }
    if(button==ui->friendButton)
    {
        button->setIcon(QIcon(":/Resource/Images/friendNO.png"));
        return;
    }
    if(button==ui->groupButton)
    {
        button->setIcon(QIcon(":/Resource/Images/groupNO.png"));
        return;
    }
    if(button==ui->setting)
    {
        button->setIcon((QIcon(":/Resource/Images/settingNO.png")));
        return;
    }
    if(button==ui->quit)
    {
        button->setIcon(QIcon(":/Resource/Images/quitNO.png"));
        return;
    }

}

void changeIconYES(Ui::MainWindow* ui,QPushButton* button)
{
    if(button==ui->userIcon)
    {
        return;
    }
    if(button==ui->msgButton)
    {
        button->setIcon(QIcon(":/Resource/Images/chatYES.png"));
        return;
    }
    if(button==ui->friendButton)
    {
        button->setIcon(QIcon(":/Resource/Images/friendYES.png"));
        return;
    }
    if(button==ui->groupButton)
    {
        button->setIcon(QIcon(":/Resource/Images/groupYES.png"));
        return;
    }
    if(button==ui->setting)
    {
        button->setIcon((QIcon(":/Resource/Images/settingYES.png")));
        return;
    }
    if(button==ui->quit)
    {
        button->setIcon(QIcon(":/Resource/Images/quitYES.png"));
        return;
    }
}


