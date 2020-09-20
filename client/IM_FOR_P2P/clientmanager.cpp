#include "clientmanager.h"


ClientManager* ClientManager::clientManager=nullptr;

ClientManager * ClientManager::getInstance()
{
    if(clientManager==nullptr)
    {
        clientManager=new ClientManager();
    }
    return clientManager;
}

ClientManager::ClientManager():
        m_signIn(new SignIn(this)),
        m_signUp(new SignUp(this)),
        m_mainWindow(new MainWindow(this))
{

}

void ClientManager::run()
{
    m_signIn->init();
    m_signUp->init();
    m_mainWindow->init();
    m_signIn->show();
}



ClientManager::~ClientManager()
{

    delete m_signIn;
    delete m_signUp;
    delete m_mainWindow;
}
