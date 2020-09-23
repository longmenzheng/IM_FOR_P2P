obj=main.o ACK.pb.o SignUp.pb.o SignIn.pb.o ModifyInfo.pb.o RelationManage.pb.o LoadFriendInfo.pb.o ApplyAgree.pb.o ChatMsg.pb.o BuildP2P.pb.o
target=ignore
$(target):$(obj)
	g++ -std=c++11 $(obj) -o $(target) -lprotobuf
%.o:%.cc
	g++ -std=c++11 -c $< -o $@ -lprotobuf
