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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatManager
{
public:
    QListWidget *listWidget;
    QLineEdit *searchEdit;
    QPushButton *searchButton;
    QPushButton *sendButton;
    QTextEdit *textEdit;
    QPushButton *smallface;
    QPushButton *chatRecord;
    QListWidget *listWidget_chat;
    QLabel *headInfo;

    void setupUi(QWidget *ChatManager)
    {
        if (ChatManager->objectName().isEmpty())
            ChatManager->setObjectName(QStringLiteral("ChatManager"));
        ChatManager->resize(740, 600);
        listWidget = new QListWidget(ChatManager);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 60, 200, 531));
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
        searchButton->setIconSize(QSize(16, 16));
        sendButton = new QPushButton(ChatManager);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(670, 570, 50, 25));
        sendButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resource/Images/sendNO.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendButton->setIcon(icon1);
        textEdit = new QTextEdit(ChatManager);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(230, 480, 491, 91));
        smallface = new QPushButton(ChatManager);
        smallface->setObjectName(QStringLiteral("smallface"));
        smallface->setGeometry(QRect(230, 450, 30, 30));
        smallface->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resource/Images/faceNO.png"), QSize(), QIcon::Normal, QIcon::Off);
        smallface->setIcon(icon2);
        smallface->setIconSize(QSize(20, 20));
        smallface->setFlat(true);
        chatRecord = new QPushButton(ChatManager);
        chatRecord->setObjectName(QStringLiteral("chatRecord"));
        chatRecord->setGeometry(QRect(270, 450, 30, 30));
        chatRecord->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resource/Images/chatRecordNO.png"), QSize(), QIcon::Normal, QIcon::Off);
        chatRecord->setIcon(icon3);
        chatRecord->setIconSize(QSize(20, 20));
        chatRecord->setFlat(true);
        listWidget_chat = new QListWidget(ChatManager);
        listWidget_chat->setObjectName(QStringLiteral("listWidget_chat"));
        listWidget_chat->setGeometry(QRect(210, 60, 531, 390));
        headInfo = new QLabel(ChatManager);
        headInfo->setObjectName(QStringLiteral("headInfo"));
        headInfo->setGeometry(QRect(210, 20, 531, 41));
        headInfo->setStyleSheet(QStringLiteral(""));
        headInfo->setAlignment(Qt::AlignCenter);
        headInfo->raise();
        listWidget->raise();
        searchButton->raise();
        textEdit->raise();
        searchEdit->raise();
        sendButton->raise();
        smallface->raise();
        chatRecord->raise();
        listWidget_chat->raise();

        retranslateUi(ChatManager);

        QMetaObject::connectSlotsByName(ChatManager);
    } // setupUi

    void retranslateUi(QWidget *ChatManager)
    {
        ChatManager->setWindowTitle(QApplication::translate("ChatManager", "Form", Q_NULLPTR));
        searchButton->setText(QApplication::translate("ChatManager", "\346\220\234\347\264\242", Q_NULLPTR));
        sendButton->setText(QApplication::translate("ChatManager", "\345\217\221\351\200\201", Q_NULLPTR));
        smallface->setText(QString());
        chatRecord->setText(QString());
        headInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChatManager: public Ui_ChatManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATMANAGER_H
