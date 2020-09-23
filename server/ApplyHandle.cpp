#include "ApplyHandle.h"
#include "MsgType.h"
#include "Msg/ApplyAgree.pb.h"
#include <mysql/mysql.h>
#include "Network.h"
#include <iostream>



int ApplyHandle::m_serverType=MsgType::AGREEADDFRIEND;
ApplyHandle::ApplyHandle(char *msg):m_msg(msg)
{
}


ServerWorker* ApplyHandle::createSelf(char* msg)
{
	return new ApplyHandle(msg);
}

void* ApplyHandle::dowork(void* pmysql)
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
	IM::ApplyAgree protomsg;
	protomsg.ParseFromArray((void*)tmp,contentLen);
	char sql[1024]={0};


	sprintf(sql,"update Friends set state_friend=%d where userID=%d and friendID=%d",protomsg.state(),protomsg.applyerid(),protomsg.peerid());
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
			IM::ApplyAgree res;
			res.set_networktype(MsgType::AGREEADDFRIEND);
			res.set_recvid(sendID);
			res.set_sendid(recvID);
			if(protomsg.state())
				res.set_state(1);
			else
				res.set_state(0);
			res.set_applyerid(protomsg.applyerid());
			Network::getInstance()->addMsg<IM::ApplyAgree>(res);		

			res.set_recvid(protomsg.applyerid());
			res.set_applyerid(sendID);
			if(protomsg.state())
				res.set_state(3);
			else
				res.set_state(4);
			Network::getInstance()->addMsg<IM::ApplyAgree>(res);


			return nullptr;
		}
	}else
	{
		std::cout<<"mysql_query error"<<std::endl;
	}
	std::cout << "同意失败"<<std::endl;
	//向客户端返回信息
}
