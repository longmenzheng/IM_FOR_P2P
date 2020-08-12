#ifndef USERINFO_H
#define USERINFO_H

#include <string>
class UserInfo
{
public:
    int userID;              //用户ID
    int sex;                 //用户性别
    std::string passwd;      //用户密码
    std::string nickName;    //用户昵称
    std::string remarkName;  //用户备注名，显示好友时用上
    std::string userSign;    //用户个性签名
    char* icon;              //用户头像
    std::string phoneNum;    //用户手机号
    UserInfo();
};

#endif // USERINFO_H
