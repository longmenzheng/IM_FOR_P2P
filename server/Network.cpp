#include "Network.h"
#include "MsgType.h"
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <thread>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Msg/ACK.pb.h"
#include "Msg/BuildP2P.pb.h"
#include <unistd.h>
#include <exception>
using namespace std;
Network* Network::m_instance=nullptr;
int Network::NetMsgID=-1;


Network::Network(queue<char*> *sendQueue,
		queue<char*> *recvQueue,
		map<int,struct sockaddr_in> *netInfoMap):
	m_sendQueue(sendQueue),
	m_recvQueue(recvQueue),
	m_netInfoMap(netInfoMap)
{
	//套接字初始化
	socketFd=socket(AF_INET,SOCK_DGRAM,0);
	if(socketFd<0)
	{
		perror("socket error:");
		return;	
	}
	struct sockaddr_in s_addr;
	memset(&s_addr,0,sizeof(s_addr));	
	s_addr.sin_family=AF_INET;
	s_addr.sin_port=htons(23333);
	s_addr.sin_addr.s_addr=INADDR_ANY;
	cout<<"-------------------------Network初始化--------------------------"<<endl;
	if(bind(socketFd,(struct sockaddr*)&s_addr,sizeof(s_addr))<0)
	{
		perror("bind error:");
		return ;
	}

	//接收线程
	std::thread *recvThread=new std::thread(recvMsg,this);
	recvThread->detach();
	std::thread *sendThread=new std::thread(sendMsg,this);
	sendThread->detach();


}


void sendMsg(Network* pNetwork)
{
	std::cout<<"----------------------------------------sendMsg--------------\n";
	while(1)
	{

		if(pNetwork->m_sendQueue->empty())
		{
			usleep(500000);//  500ms
			continue;
		}

		char *msg = pNetwork->m_sendQueue->front();
		//格式：接收者ID\n发送者ID\n消息ID\n消息类型\n消息内容长度\n消息内容
		int recvID=-1;
		int msgID=-1;
		int msgType=-1;
		sscanf(msg,"%d\n%*d\n%d\n%d\n",&recvID,&msgID,&msgType);
		struct sockaddr_in c_addr;
		//memcpy(&(*pNetwork->m_netInfoMap)[sendID],&c_addr,sizeof(c_addr));
		//memcpy(&c_addr,&(*pNetwork->m_netInfoMap)[recvID],sizeof(c_addr));//根据接收端ID获取其网络地址
		try{
			c_addr=(*pNetwork->m_netInfoMap).at(recvID);
			std::cout<<"----------这条消息的接受者---"<<recvID<<std::endl;
		}catch(std::out_of_range e)
		{

			std::cout<<"---接收者不在线----"<<std::endl;
			pNetwork->m_sendQueue->pop();
			char *tmp = (pNetwork->m_allsendMap).at(msgID);
			(pNetwork->m_allsendMap).erase(msgID);          //从map中移除
			delete tmp;                       //delete移除的元素
			std::cout<<"------消息被删除取消发送--:"<<msgID<<"----------\n";

			continue;
		}
		if(sendto(pNetwork->socketFd,msg,strlen(msg),0,(struct sockaddr*)&c_addr,sizeof(c_addr))<0)
		{
			perror("sendto error:");
		}
		pNetwork->m_sendQueue->pop();
		if(MsgType::ACK==msgType)
		{
			free(msg);
			std::cout<<"--------------发送ACK: "<<msgID<<" 消息类型："<<msgType<<"--------------\n";
			continue;
		}
		std::cout<<"--------------发送消息: "<<msgID<<" 消息类型："<<msgType<<"--------------\n";
		pNetwork->m_time[msgID]=clock();  //开始计时


	}

}

void recvMsg(Network* pNetwork)
{
	/*
	 * 接收到消息后 1)立即回一个ACK  2)将消息加入接收队列 3）更新网络信息
	 * 
	 */
	std::cout<<"------------------------recvMsg---------------------------\n";
	char *buf=(char*)malloc(1024);
	struct sockaddr_in c_addr;//客户端地址结构
	memset(&c_addr,0,sizeof(c_addr));

	socklen_t sockLen=sizeof(c_addr);
	//下面开始循环接收消息
	while(1)
	{
		//格式：接收者ID\n发送者ID\n消息ID\n消息类型\n消息内容长度\n消息内容
		int recvlen=recvfrom(pNetwork->socketFd,buf,1024,0,(struct sockaddr*)&c_addr,&sockLen);
		char *tmp=(char*)malloc(recvlen+1);  //将buf的消息存于tmp
		memset(tmp,0,recvlen+1);
		memcpy(tmp,buf,recvlen);



		int sendID=-1;
		int msgID=-1;
		int msgType=-1;
		sscanf(tmp,"%*d\n%d\n%d\n%d\n",&sendID,&msgID,&msgType);

		if(msgType==MsgType::ACK)   //消息确认
		{
			std::cout<<"--------------接收ACK: "<<msgID<<" 消息类型："<<msgType<<"--------------\n";
			//删掉对方已收到信息
			if((pNetwork->m_allsendMap).count(msgID))
			{
				char *tmp = (pNetwork->m_allsendMap).at(msgID);
				(pNetwork->m_allsendMap).erase(msgID);          //从map中移除
				delete tmp;                       //delete移除的元素
				std::cout<<"------被确认消息--:"<<msgID<<"----------\n";
			}

			if((pNetwork->m_time).count(msgID))
			{
				(pNetwork->m_time).erase(msgID);             //移除计时器
				std::cout<<"------消息--:"<<msgID<<"--计时器移除-------\n";
			}


			continue;
		}




		/*
		//-------------处理buildp2p------------
		if(msgType==MsgType::BUILDP2P)
		{
		char* msg=tmp;
		int contentLen=-1;
		char tmp[1024]={0};

		//格式：接收者ID\n发送者ID\n消息ID\n消息类型\n消息内容长度\n消息内容
		sscanf(msg,"%*d\n%*d\n%*d\n%*d\n%d\n",&contentLen);  //获取消息ID 消息类型
		const char *p=msg;
		for(int i=0,flag=0;flag!=5;++i)
		{
		if(*p++ =='\n')
		++flag;
		}
		memcpy(tmp,p,contentLen);
		IM::BuildP2P res;
		res.ParseFromArray((void*)tmp,contentLen);
		try{
		//memcpy(&(*pNetwork->m_netInfoMap)[sendID],&c_addr,sizeof(c_addr));
		struct sockaddr_in netinfo;
		memcpy(&netinfo,&(pNetwork->m_netInfoMap->at(res.peerid())),sizeof(netinfo));
		char ip[16]={0};
		int port;
		inet_ntop(AF_INET,(void*)&netinfo.sin_addr.s_addr,ip,16);
		std::cout<<"---id: "<<res.peerid()<<"-----ip: "<<ip;
		port=ntohs(netinfo.sin_port);
		std::cout<<":"<<port<<std::endl;
		res.set_recvid(sendID);
		res.set_sendid(0);
		res.set_flag(1);
		res.set_peerip(ip);
		res.set_peerposrt(port);
		pNetwork->addMsg<IM::BuildP2P>(res);

		memcpy(&netinfo,&(pNetwork->m_netInfoMap->at(sendID)),sizeof(netinfo));
		inet_ntop(AF_INET,(void*)&netinfo.sin_addr.s_addr,ip,16);
		std::cout<<"--------ip: "<<ip;
		port=ntohs(netinfo.sin_port);
		std::cout<<":"<<port<<std::endl;

		res.set_recvid(res.peerid());
		res.set_peerip(ip);
		res.set_peerposrt(port);
		pNetwork->addMsg<IM::BuildP2P>(res);



		}catch(std::out_of_range e)
		{
		std::cout<<"-----------------------不在线------------------"<<std::endl;
		res.set_recvid(sendID);
		res.set_sendid(0);
		res.set_flag(0);
		pNetwork->addMsg<IM::BuildP2P>(res);

		}

		}
		*/


		std::cout<<"--------------接收消息: "<<msgID<<" 消息类型："<<msgType<<"--------------\n";
		pNetwork->m_recvQueue->push(tmp);

		//更新网络信息
		memcpy(&(*pNetwork->m_netInfoMap)[sendID],&c_addr,sizeof(c_addr));
		//test
		struct sockaddr_in *t_addr;
		t_addr=&(*(pNetwork->m_netInfoMap))[sendID];
		char ip[16]={0};
		inet_ntop(AF_INET,&t_addr->sin_addr,ip,(socklen_t)sizeof(ip));

		//向客户端回确认消息
		if(MsgType::ACK!=msgType)
		{
			IM::ACK ack;
			ack.set_networktype(MsgType::ACK);
			ack.set_msgid(msgID);
			ack.set_sendid(0);
			ack.set_recvid(sendID);
			pNetwork->addMsg<IM::ACK>(ack);
		}	

	}
}


Network* Network::getInstance()
{
	return m_instance;
}


