#include "AddFriend.h"
#include "MsgType.h"
#include "Msg/RelationManage.pb.h"
#include "Network.h"
#include <mysql/mysql.h>
#include <iostream>

int AddFriend::m_serverType= MsgType::ADDFRIEND;

AddFriend::AddFriend(char *msg):m_msg(msg)
{

}


ServerWorker* AddFriend::createSelf(char *msg)
{
	return new AddFriend(msg);
}

void* AddFriend::dowork(void *pmysql)
{
	//
	std::cout<<"---------------------------AddFriend::dowork---------------------\n";
	MYSQL *mysql=(MYSQL*)pmysql;
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
	IM::RelationManage protomsg;
	protomsg.ParseFromArray((void*)tmp,contentLen);
	char sql[1024]={0};
	sprintf(sql,"insert ignore into Friends (userID,remarkname1,friendID,remarkName2,state_friend) values(%d,'%s',%d,'%s',%d)",protomsg.applyerid(),protomsg.applyernickname().c_str(),protomsg.peerid(),protomsg.peernickname().c_str(),protomsg.state());//1表示申请添加
	std::cout<<sql<<std::endl;
	if(0!=mysql_ping(mysql))
	{
		std::cout<<"与数据库连接无效"<<std::endl;
	}
	if(0==mysql_query(mysql,sql))
	{
		//执行成功 判断插入是否成功
		if(1>=(long)mysql_affected_rows(mysql))
		{
			std::cout<<"申请成功"<<std::endl;
			IM::RelationManage data;
			data.set_networktype(MsgType::ADDFRIEND);
			data.set_recvid(sendID);
			data.set_sendid(recvID);
			data.set_state(1);
			data.set_peerid(0);
			Network::getInstance()->addMsg<IM::RelationManage>(data);


			//通知到被申请方
			data.set_peerid(protomsg.applyerid());
			data.set_recvid(protomsg.peerid());
			Network::getInstance()->addMsg<IM::RelationManage>(data);

			return nullptr;	
		}	
	}else
	{
		std::cout<<"----addfriend error-----";

	}


	return nullptr;

}
