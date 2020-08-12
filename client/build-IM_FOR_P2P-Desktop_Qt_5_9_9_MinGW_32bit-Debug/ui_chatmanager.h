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
    QListWidget *ChatManager_2;
    QLineEdit *searchEdit;
    QPushButton *searchButton;

    void setupUi(QWidget *ChatManager)
    {
        if (ChatManager->objectName().isEmpty())
            ChatManager->setObjectName(QStringLiteral("ChatManager"));
        ChatManager->resize(740, 600);
        ChatManager_2 = new QListWidget(ChatManager);
        new QListWidgetItem(ChatManager_2);
        new QListWidgetItem(ChatManager_2);
        ChatManager_2->setObjectName(QStringLiteral("ChatManager_2"));
        ChatManager_2->setGeometry(QRect(10, 60, 200, 540));
        searchEdit = new QLineEdit(ChatManager);
        searchEdit->setObjectName(QStringLiteral("searchEdit"));
        searchEdit->setGeometry(QRect(10, 20, 150, 20));
        searchButton = new QPushButton(ChatManager);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(160, 20, 50, 20));
        searchButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resource/Images/searchIcon .png"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon);

        retranslateUi(ChatManager);

        QMetaObject::connectSlotsByName(ChatManager);
    } // setupUi

    void retranslateUi(QWidget *ChatManager)
    {
        ChatManager->setWindowTitle(QApplication::translate("ChatManager", "Form", Q_NULLPTR));

        const bool __sortingEnabled = ChatManager_2->isSortingEnabled();
        ChatManager_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = ChatManager_2->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("ChatManager", "\351\234\200\350\246\201\350\207\252\345\256\232\344\271\211\350\201\212\345\244\251\346\230\276\347\244\272\346\216\247\344\273\2661", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = ChatManager_2->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("ChatManager", "\351\234\200\350\246\201\350\207\252\345\256\232\344\271\211\350\201\212\345\244\251\346\230\276\347\244\272\346\216\247\344\273\2662", Q_NULLPTR));
        ChatManager_2->setSortingEnabled(__sortingEnabled);

        searchButton->setText(QApplication::translate("ChatManager", "\346\220\234\347\264\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChatManager: public Ui_ChatManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATMANAGER_H
