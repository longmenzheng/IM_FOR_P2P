#include "BuildP2P.h"
#include "MsgType.h"
#include "Msg/BuildP2P.pb.h"
#include "Network.h"
#include <iostream>

int BuildP2P::m_serverType=MsgType::BUILDP2P;

BuildP2P::BuildP2P(char *msg):m_msg(msg){


	std::cout <<"------------------------BuildP2P----------------------\n";
}

ServerWorker* BuildP2P::createSelf(char *msg)
{

	return new BuildP2P(msg);
}
void* BuildP2P::dowork(void *pmysql)
{
	//-------------处理buildp2p------------
	std::cout<<"------------------------------BuildP2Pp::dowrk---------------------\n";
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

	IM::BuildP2P res;
	res.ParseFromArray((void*)tmp,contentLen);
	Network* pNetwork=Network::getInstance();
	if(res.flag()==1)
	try{
		//memcpy(&(*pNetwork->m_netInfoMap)[sendID],&c_addr,sizeof(c_addr));
		struct sockaddr_in netinfo;
		memcpy(&netinfo,&(pNetwork->m_netInfoMap->at(res.peerid())),sizeof(netinfo));
		//如果在线才会执行下面的 否则抛出异常
		//向请求端发送数据
		char ip[16]={0};
		int port;
		inet_ntop(AF_INET,(void*)&netinfo.sin_addr.s_addr,ip,16);
		std::cout<<"---id: "<<res.peerid()<<"-----ip: "<<ip;
		port=ntohs(netinfo.sin_port);
		std::cout<<":"<<port<<std::endl;
		res.set_networktype(MsgType::BUILDP2P);
		res.set_recvid(sendID);
		res.set_sendid(0);
		res.set_flag(1);
		res.set_peerip(ip);
		res.set_peerposrt(port);
		pNetwork->addMsg<IM::BuildP2P>(res);

		std::cout<<"-----recvID-"<<res.recvid()<<std::endl;
		std::cout<<"-----peerid-"<<res.peerid()<<std::endl;

		//同时向被请求
		IM::BuildP2P res1;
		res1.set_networktype(MsgType::BUILDP2P);
		memcpy(&netinfo,&(pNetwork->m_netInfoMap->at(sendID)),sizeof(netinfo));
		inet_ntop(AF_INET,(void*)&netinfo.sin_addr.s_addr,ip,16);
		res1.set_recvid(res.peerid());
		res1.set_sendid(0);
		res1.set_flag(1);
		std::cout<<"--------ip: "<<ip;
		port=ntohs(netinfo.sin_port);
		std::cout<<":"<<port<<std::endl;

		res1.set_peerid(sendID);
		std::cout<<"-----recvID-"<<res1.recvid()<<std::endl;
		std::cout<<"-----peerid-"<<res1.peerid()<<std::endl;
		res1.set_peerip(ip);
		res1.set_peerposrt(port);
		pNetwork->addMsg<IM::BuildP2P>(res1);



	}catch(std::out_of_range e)
	{
		std::cout<<"-----------------------不在线------recvID-------"<<sendID<<std::endl;
		res.set_networktype(MsgType::BUILDP2P);
		res.set_recvid(sendID);
		res.set_sendid(0);
		res.set_flag(0);
		pNetwork->addMsg<IM::BuildP2P>(res);

	}
	else if(res.flag()==0)
	{
		try{
			pNetwork->m_netInfoMap->erase(res.sendid());
			std::cout<<"---------------用户："<<res.sendid()<<" 下线---------------"<<std::endl;
		}catch(std::out_of_range e){
		}
	}
}
