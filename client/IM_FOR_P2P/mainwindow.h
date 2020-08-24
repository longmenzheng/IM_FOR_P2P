#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QPushButton>
#include "friendmanager.h"
#include "groupmanager.h"
#include "chatmanager.h"
#include "showuserinfo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class ClientManager;
class ChatManager;
class FriendManager;
class GroupManager;
class ShowUserInfo;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(ClientManager* m_clientManager,QWidget *parent = nullptr);
    ~MainWindow();
    void init();
    FriendManager* getFriendManager(){return m_friendManager;}
    ShowUserInfo* getShowuserInfo(){return m_showUserInfo;}
    ChatManager* getChatManager(){return m_chatManager;}
    GroupManager* getGroupManager(){return m_groupManager;}

private:
    Ui::MainWindow *ui;
    ClientManager* m_clientManager;
    QStackedWidget *m_stackedWidget;
    ChatManager* m_chatManager;
    FriendManager* m_friendManager;
    GroupManager* m_groupManager;
    ShowUserInfo* m_showUserInfo;
    QPushButton* m_currentButton;   //当前被点击按钮
public:
    //槽函数
    void inMainWindow();  //进入主窗口槽
    void clickShowInfo();
    void clickChatButton();
    void clickFriendButton();
    void clickGroupButton();
    void clickSettingButton();
    void clickQuitButton();
};
#endif // MAINWINDOW_H
