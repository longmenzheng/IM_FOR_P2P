#include "Chat.h"
#include "MsgType.h"
#include "Msg/ChatMsg.pb.h"
#include "Network.h"
#include <iostream>

int Chat::m_serverType=MsgType::CHAT;

Chat::Chat(char *msg):m_msg(msg)
{
	std::cout<<"---------------------Chat----------------";
}

ServerWorker* Chat::createSelf(char* msg)
{
	return new Chat(msg);
}


void* Chat::dowork(void*)
{
	std::cout<<"-----------------Chat::dowork-------\n";
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
	IM::ChatMsg protomsg;
	protomsg.ParseFromArray((void*)tmp,contentLen);
	std::cout<<"-----msg: "<<protomsg.content()<<std::endl;
	
}

	
	



