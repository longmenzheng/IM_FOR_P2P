#include "LoadFriendInfo.h"
#include "MsgType.h"
#include "Msg/LoadFriendInfo.pb.h"
#include "Network.h"
#include <mysql/mysql.h>
#include <cstring>

int LoadFriendInfo::m_serverType=MsgType::LOADFRIENDINFO;
LoadFriendInfo::LoadFriendInfo(char*msg):m_msg(msg)
{

}


ServerWorker* LoadFriendInfo::createSelf(char *msg)
{

	return new LoadFriendInfo(msg);
}

void* LoadFriendInfo::dowork(void* pmysql)
{
	std::cout<<"------------------------------LoadFriendInfo::dowrk---------------------\n";
	MYSQL *mysql=(MYSQL*)pmysql;  //应该保证此处的正确性
	int recvID=-1,msgType=-1,msgID=-1, sendID=-1, contentLen=-1;
	char tmp[1024]={0};

	//格式：接收者ID\n发送者ID\n消息ID\n消息类型\n消息内容长度\n消息内容
	sscanf(m_msg,"%d\n%d\n%d\n%d\n%d\n",&recvID,&sendID,&msgID,&msgType,&contentLen);  //获取消息ID 消息类型
	char *p=m_msg;
	for(int i=0,flag=0;flag!=5;++i)
	{
		if(*p++ =='\n')
			++flag;
	}
	memcpy(tmp,p,contentLen);
	//IM::SignUp protomsg;
	//protomsg.ParseFromArray((void*)tmp,contentLen);
	char sql[1024]={0};
	sprintf(sql,"select a.userID,a.remarkName1,User.sex,a.friendID,a.remarkName2,a.sex,a.state_friend from (select Friends.userID,Friends.remarkName1,Friends.friendID,Friends.remarkName2,User.sex,Friends.state_friend from Friends inner join User on Friends.friendID=User.userID where Friends.userID=%d or Friends.friendID=%d) as a inner join User on a.userID=User.userID",sendID,sendID);
	std::cout<<sql<<std::endl;
	if(0!=mysql_ping(mysql))
	{
		std::cout<<"与数据库连接无效"<<std::endl;
	}
	if(0==mysql_query(mysql,sql))
	{
		MYSQL_RES* result=mysql_store_result(mysql);
		//执行成功 判断插入是否成功
		if(result!=NULL)
		{
			if(mysql_num_rows(result)>0)
			{
				std::cout << "注册成功"<<std::endl;
				MYSQL_ROW row;
				while(row=mysql_fetch_row(result))
				{
					IM::LoadFriendInfo data;
					data.set_networktype(MsgType::LOADFRIENDINFO);
					data.set_recvid(sendID);
					data.set_sendid(recvID);
					data.set_userid(std::atoi(row[0]));
					data.set_userremarkname(row[1]);
					data.set_u_sex(std::atoi(row[2]));
					data.set_friendid(std::atoi(row[3]));
					data.set_friendremarkname(row[4]);
					data.set_f_sex(std::atoi(row[5]));
					data.set_state(std::atoi(row[6]));
					Network::getInstance()->addMsg<IM::LoadFriendInfo>(data);
				}



				return nullptr;
			}
		}
	}
}
