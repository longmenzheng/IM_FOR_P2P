#include "clientmanager.h"

ClientManager::ClientManager():
        m_signIn(new SignIn(this)),
        m_signUp(new SignUp(this)),
        m_friendManager(new FriendManager(this)),
        m_groupManager(new GroupManager(this)),
        m_chatManager(new ChatManager(this))
{

}

void ClientManager::run()
{
    m_signIn->init();
    m_signUp->init();
    m_chatManager->init();
    m_friendManager->init();
    m_groupManager->init();
    m_signIn->show();
}

ClientManager::ClientManager(SignIn *signIn,SignUp *signUp,
              FriendManager *friendManager,
              GroupManager *groupManager,
              ChatManager *chatManager):
    m_signIn(signIn),
    m_signUp(signUp),
    m_friendManager(friendManager),
    m_groupManager(groupManager),
    m_chatManager(chatManager)
{

}

ClientManager::~ClientManager()
{
    delete m_signIn;
    delete m_signUp;
    delete m_friendManager;
    delete m_groupManager;
    delete m_chatManager;
}
