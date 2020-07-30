/********************************************************************************
** Form generated from reading UI file 'chatmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATMANAGER_H
#define UI_CHATMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatManager
{
public:
    QPushButton *friendButton;
    QPushButton *groupButton;
    QPushButton *msgButton;
    QListWidget *ChatManager_2;
    QLineEdit *searchBar;
    QPushButton *pushButton_4;

    void setupUi(QWidget *ChatManager)
    {
        if (ChatManager->objectName().isEmpty())
            ChatManager->setObjectName(QStringLiteral("ChatManager"));
        ChatManager->resize(800, 600);
        friendButton = new QPushButton(ChatManager);
        friendButton->setObjectName(QStringLiteral("friendButton"));
        friendButton->setGeometry(QRect(0, 120, 50, 50));
        groupButton = new QPushButton(ChatManager);
        groupButton->setObjectName(QStringLiteral("groupButton"));
        groupButton->setGeometry(QRect(0, 180, 50, 50));
        msgButton = new QPushButton(ChatManager);
        msgButton->setObjectName(QStringLiteral("msgButton"));
        msgButton->setGeometry(QRect(0, 60, 50, 50));
        ChatManager_2 = new QListWidget(ChatManager);
        new QListWidgetItem(ChatManager_2);
        new QListWidgetItem(ChatManager_2);
        ChatManager_2->setObjectName(QStringLiteral("ChatManager_2"));
        ChatManager_2->setGeometry(QRect(50, 60, 200, 540));
        searchBar = new QLineEdit(ChatManager);
        searchBar->setObjectName(QStringLiteral("searchBar"));
        searchBar->setGeometry(QRect(50, 20, 151, 20));
        pushButton_4 = new QPushButton(ChatManager);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(210, 20, 41, 23));

        retranslateUi(ChatManager);

        QMetaObject::connectSlotsByName(ChatManager);
    } // setupUi

    void retranslateUi(QWidget *ChatManager)
    {
        ChatManager->setWindowTitle(QApplication::translate("ChatManager", "Form", Q_NULLPTR));
        friendButton->setText(QApplication::translate("ChatManager", "\345\245\275\345\217\213", Q_NULLPTR));
        groupButton->setText(QApplication::translate("ChatManager", "\347\276\244", Q_NULLPTR));
        msgButton->setText(QApplication::translate("ChatManager", "\346\266\210\346\201\257", Q_NULLPTR));

        const bool __sortingEnabled = ChatManager_2->isSortingEnabled();
        ChatManager_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = ChatManager_2->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("ChatManager", "\351\234\200\350\246\201\350\207\252\345\256\232\344\271\211\350\201\212\345\244\251\346\230\276\347\244\272\346\216\247\344\273\2661", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = ChatManager_2->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("ChatManager", "\351\234\200\350\246\201\350\207\252\345\256\232\344\271\211\350\201\212\345\244\251\346\230\276\347\244\272\346\216\247\344\273\2662", Q_NULLPTR));
        ChatManager_2->setSortingEnabled(__sortingEnabled);

        pushButton_4->setText(QApplication::translate("ChatManager", "\346\220\234\347\264\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChatManager: public Ui_ChatManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATMANAGER_H
