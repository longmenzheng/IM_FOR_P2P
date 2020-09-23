
#include "SignIn.h"
#include "MsgType.h"
#include "Msg/SignIn.pb.h"
#include <mysql/mysql.h>
#include "Network.h"
#include <iostream>

int SignIn::m_serverType=MsgType::SIGNIN;

SignIn::SignIn(char *msg):m_msg(msg){


	std::cout <<"------------------------SignIn----------------------\n";
}

ServerWorker* SignIn::createSelf(char *msg)
{

	return new SignIn(msg);
}
void* SignIn::dowork(void *pmysql)
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
	IM::SignIn protomsg;
	protomsg.ParseFromArray((void*)tmp,contentLen);
	char sql[1024]={0};
	if(protomsg.phone().length()==11)
	{
		sprintf(sql,"select *from User where password='%s' and phoneNum='%s'",protomsg.password().c_str(),protomsg.phone().c_str());
	}else
	{
		sprintf(sql,"select *from User where userID=%d and password='%s'",protomsg.sendid(),protomsg.password().c_str());

	}
	std::cout<<sql<<std::endl;
	if(0!=mysql_ping(mysql))
	{
		std::cout<<"与数据库连接无效"<<std::endl;
	}
	if(0==mysql_query(mysql,sql))
	{
		//执行成功 判断插入是否成功
		MYSQL_RES* res =mysql_store_result(mysql);
		if(res!=NULL)
		{
			if(mysql_num_rows(res)==1)
			{
				std::cout << "登录成功"<<std::endl;
				//向客户端返回信息
				IM::SignIn res;
				res.set_networktype(MsgType::SIGNIN);
				res.set_recvid(sendID);
				res.set_sendid(recvID);
				res.set_state(1);
				Network::getInstance()->addMsg<IM::SignIn>(res);	
				return nullptr;
			}
		}
		mysql_free_result(res);
	}else
	{
		std::cout<<"mysql_query error"<<std::endl;
	}
	std::cout << "注册失败"<<std::endl;
	//向客户端返回信息
	IM::SignIn res;
	res.set_networktype(MsgType::SIGNIN);
	res.set_recvid(sendID);
	res.set_sendid(recvID);
	res.set_state(2);
	Network::getInstance()->addMsg<IM::SignIn>(res);		

	//}

}
