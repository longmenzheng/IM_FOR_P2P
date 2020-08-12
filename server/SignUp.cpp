#include "SignUp.h"
#include "MsgType.h"
#include "Msg/SignUp.pb.h"
#include "Network.h"
#include <mysql/mysql.h>
#include <cstring>




int SignUp::m_serverType=MsgType::SIGNUP;

ServerWorker* SignUp::createSelf(char *msg)
{
	/*
	   char *tmp=(char*)malloc(strlen(msg)+1);
	   bzero(tmp,strlen(msg)+1);
	   std::cout<<"创建时传入xiaoxi:"<<msg<<std::endl;
	   memcpy(tmp,msg,strlen(msg));
	   std::cout<<"创建时传入xiaoxi:"<<tmp<<std::endl;
	   return new SignUp(tmp);
	   */
	std::cout<<"--------------------------SignUp--------------------\n";
	return new SignUp(msg);
}

SignUp::~SignUp(){}


void* SignUp::dowork(void * pmysql)   //对于需要使用数据库的服务，应该传入一个数据库连接对象
{
	std::cout<<"------------------------------SignUp::dowrk---------------------\n";
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
	//if(msgType==MsgType::SIGNUP)
	//{    
	IM::SignUp protomsg;
	protomsg.ParseFromArray((void*)tmp,contentLen);
	char sql[1024]={0};
	sprintf(sql,"insert ignore into User(password,sex,nickname,phoneNum) values('%s','%d','%s','%s')",protomsg.password().c_str(),protomsg.sex(),protomsg.nickname().c_str(),protomsg.phone().c_str());
	std::cout<<sql<<std::endl;
	if(0!=mysql_ping(mysql))
	{
		std::cout<<"与数据库连接无效"<<std::endl;
	}
	if(0==mysql_query(mysql,sql))
	{
		//执行成功 判断插入是否成功
		if(1==(long)mysql_affected_rows(mysql))
		{
			std::cout << "注册成功"<<std::endl;
			//向客户端返回信息
			IM::SignUp res;
			res.set_networktype(MsgType::SIGNUP);
			res.set_recvid(sendID);
			res.set_sendid(recvID);
			res.set_state(1);
			Network::getInstance()->addMsg<IM::SignUp>(res);		
			return nullptr;
		}
	}else
	{
		std::cout<<"mysql_query error"<<std::endl;
	}
	std::cout << "注册失败"<<std::endl;
	//向客户端返回信息
	IM::SignUp res;
	res.set_networktype(MsgType::SIGNUP);
	res.set_recvid(sendID);
	res.set_sendid(recvID);
	res.set_state(2);
	Network::getInstance()->addMsg<IM::SignUp>(res);		

	//}

}
