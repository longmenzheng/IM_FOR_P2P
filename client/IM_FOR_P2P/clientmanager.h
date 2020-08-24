#ifndef CLIENTMANAGER_H
#define CLIENTMANAGER_H
#include <string>
#include "signin.h"
#include "signup.h"
#include "SecondClasses/userinfo.h"
#include "mainwindow.h"


class SignIn;
class SignUp;
class FriendManager;
class GroupManager;
class ChatManager;
class UserInfo;
class MainWindow;

class ClientManager
{
private:
    UserInfo m_userInfo;               //用户信息
    SignIn* m_signIn;                  //登录界面
    SignUp* m_signUp;                  //注册界面
    MainWindow* m_mainWindow;            //主界面

    ClientManager();
    ClientManager(ClientManager&){}    //拷贝构造

public:

    static ClientManager* clientManager;
    void run();
    inline UserInfo* getUserInfo(){return &m_userInfo;}
    inline SignIn *getSignIn(){return m_signIn;}
    inline SignUp *getSignUp(){return m_signUp;}
    inline MainWindow* getMainWindow(){return m_mainWindow;}


    static ClientManager* getInstance();

    ~ClientManager();
};

#endif // CLIENTMANAGER_H
