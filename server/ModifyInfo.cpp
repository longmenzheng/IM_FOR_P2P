#include "ModifyInfo.h"
#include "MsgType.h"
#include "Msg/ModifyInfo.pb.h"
#include "mysql/mysql.h"
#include "Network.h"

int ModifyInfo::m_serverType=MsgType::MODIFYUAERINFO;

ModifyInfo::ModifyInfo(char *msg):m_msg(msg){}


ServerWorker* ModifyInfo::createSelf(char *msg)
{
	return new ModifyInfo(msg);
}

void* ModifyInfo::dowork(void *pmysql)
{
	std::cout<<"-------------------------ServerWorker::dowrk---------------------\n";
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
	IM::ModifyInfo protomsg;
	protomsg.ParseFromArray((void*)tmp,contentLen);
	char sql[1024]={0};
	if(protomsg.phone().length()==11)
	{
		sprintf(sql,"select *from User where phoneNum='%s'",protomsg.phone().c_str());
	}else
	{
		sprintf(sql,"select *from User where userID=%d",protomsg.userid());

	}

	std::cout<<sql<<std::endl;
	if(0!=mysql_ping(mysql))
	{
		std::cout<<"与数据库连接无效"<<std::endl;
	}
	if(0==mysql_query(mysql,sql))
	{
		MYSQL_RES* result =mysql_store_result(mysql);
		if(result!=NULL)
		{
			if(mysql_num_rows(result)==1)
			{
				std::cout << "查询成功"<<std::endl;
				//向客户端返回信息
				IM::ModifyInfo res;
				res.set_networktype(MsgType::MODIFYUAERINFO);
				res.set_recvid(sendID);
				res.set_sendid(recvID);
				res.set_state(1);
				MYSQL_ROW row = mysql_fetch_row(result);
				res.set_userid(std::atoi(row[0]));
				res.set_password(row[1]);
				res.set_sex(std::atoi(row[2]));
				res.set_nickname(row[3]);
				if(row[4]==nullptr)
					res.set_desc(" ");
				else
					res.set_desc(row[4]);
				res.set_phone(row[5]);
				if(row[6]==nullptr)
					res.set_icon("1");
				else
					res.set_icon(row[6]);

				Network::getInstance()->addMsg<IM::ModifyInfo>(res);	
				return nullptr;
			}
		}
		mysql_free_result(result);
	}else
	{
		std::cout<<"mysql_query error"<<std::endl;
	}
	std::cout << "注册失败"<<std::endl;
	//向客户端返回信息
	IM::ModifyInfo res;
	res.set_networktype(MsgType::MODIFYUAERINFO);
	res.set_recvid(sendID);
	res.set_sendid(recvID);
	res.set_state(2);

	Network::getInstance()->addMsg<IM::ModifyInfo>(res);	





}
