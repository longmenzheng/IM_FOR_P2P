QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Msg/ACK.pb.cc \
    Msg/ApplyAgree.pb.cc \
    Msg/BuildP2P.pb.cc \
    Msg/ChatMsg.pb.cc \
    Msg/Connect.pb.cc \
    Msg/ModifyInfo.pb.cc \
    Msg/OfflineMsg.pb.cc \
    Msg/RelationManage.pb.cc \
    Msg/SignIn.pb.cc \
    Msg/SignUp.pb.cc \
    Msg/SystemMsg.pb.cc \
    Net/ackhandler.cpp \
    Net/distributethread.cpp \
    Net/netobserver.cpp \
    Net/nettest.cpp \
    Net/nettest2.cpp \
    Net/network.cpp \
    Net/recvthread.cpp \
    Net/resendthread.cpp \
    Net/sendthread.cpp \
    chatmanager.cpp \
    clientmanager.cpp \
    friendmanager.cpp \
    groupmanager.cpp \
    main.cpp \
    mainwindow.cpp \
    signin.cpp \
    signup.cpp

HEADERS += \
    Msg/ACK.pb.h \
    Msg/ApplyAgree.pb.h \
    Msg/BuildP2P.pb.h \
    Msg/ChatMsg.pb.h \
    Msg/Connect.pb.h \
    Msg/ModifyInfo.pb.h \
    Msg/OfflineMsg.pb.h \
    Msg/RelationManage.pb.h \
    Msg/SignIn.pb.h \
    Msg/SignUp.pb.h \
    Msg/SystemMsg.pb.h \
    Net/ackhandler.h \
    Net/distributethread.h \
    Net/netobserver.h \
    Net/nettest.h \
    Net/nettest2.h \
    Net/network.h \
    Net/recvthread.h \
    Net/resendthread.h \
    Net/sendthread.h \
    chatmanager.h \
    clientmanager.h \
    friendmanager.h \
    groupmanager.h \
    mainwindow.h \
    signin.h \
    signup.h

FORMS += \
    Net/nettest.ui \
    Net/nettest2.ui \
    chatmanager.ui \
    friendmanager.ui \
    groupmanager.ui \
    mainwindow.ui \
    signin.ui \
    signup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

INCLUDEPATH += $$PWD/Protobuf/include $$PWD/Net $$PWD/Msg

LIBS += -L$$PWD/Protobuf/lib -lprotobuf

RESOURCES += \
    Res.qrc
