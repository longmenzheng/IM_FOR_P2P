#ifndef CLIENTMANAGER_H
#define CLIENTMANAGER_H
#include <string>
#include "signin.h"
#include "signup.h"
#include "friendmanager.h"
#include "groupmanager.h"
#include "chatmanager.h"

typedef struct{
    int userID;              //用户ID
    bool sex;                //用户性别
    std::string nickName;    //用户昵称
    std::string userSign;    //用户个性签名
    unsigned char* icon;     //用户头像
    std::string phoneNum;    //用户手机号
}UserInfo;

class SignIn;
class SignUp;
class FriendManager;
class GroupManager;
class ChatManager;

class ClientManager
{
private:
    UserInfo m_userInfo;               //用户信息
    SignIn* m_signIn;                  //登录界面
    SignUp* m_signUp;                  //注册界面
    FriendManager* m_friendManager;    //好友管理界面
    GroupManager* m_groupManager;      //群管理界面
    ChatManager* m_chatManager;        //聊天管理界面

    ClientManager();
    ClientManager(SignIn *signIn,SignUp *signUp,
                  FriendManager *friendManager,
                  GroupManager *groupManager,
                  ChatManager *chatManager);
    static ClientManager* clientManager;

public:
    void run();
    inline UserInfo& getUserInfo(){return m_userInfo;}
    inline SignIn *getSignIn(){return m_signIn;}
    inline SignUp *getSignUp(){return m_signUp;}
    inline FriendManager *getFriendManager(){return m_friendManager;}
    inline GroupManager *getGroupManager(){return m_groupManager;}
    inline ChatManager *getChatManager(){return m_chatManager;}

    static ClientManager* getInstance();

    ~ClientManager();
};

#endif // CLIENTMANAGER_H
