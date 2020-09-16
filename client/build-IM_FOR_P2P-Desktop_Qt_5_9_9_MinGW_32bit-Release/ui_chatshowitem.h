/********************************************************************************
** Form generated from reading UI file 'chatshowitem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATSHOWITEM_H
#define UI_CHATSHOWITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatShowItem
{
public:
    QLabel *userIcon;
    QLabel *nickname;
    QPushButton *delChat;
    QLabel *unreadMsg;

    void setupUi(QWidget *ChatShowItem)
    {
        if (ChatShowItem->objectName().isEmpty())
            ChatShowItem->setObjectName(QStringLiteral("ChatShowItem"));
        ChatShowItem->resize(185, 50);
        userIcon = new QLabel(ChatShowItem);
        userIcon->setObjectName(QStringLiteral("userIcon"));
        userIcon->setGeometry(QRect(10, 10, 30, 30));
        nickname = new QLabel(ChatShowItem);
        nickname->setObjectName(QStringLiteral("nickname"));
        nickname->setGeometry(QRect(50, 15, 140, 20));
        delChat = new QPushButton(ChatShowItem);
        delChat->setObjectName(QStringLiteral("delChat"));
        delChat->setGeometry(QRect(160, 15, 23, 23));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resource/Images/disagree.png"), QSize(), QIcon::Normal, QIcon::Off);
        delChat->setIcon(icon);
        delChat->setIconSize(QSize(20, 20));
        delChat->setFlat(true);
        unreadMsg = new QLabel(ChatShowItem);
        unreadMsg->setObjectName(QStringLiteral("unreadMsg"));
        unreadMsg->setGeometry(QRect(30, 0, 23, 23));

        retranslateUi(ChatShowItem);

        QMetaObject::connectSlotsByName(ChatShowItem);
    } // setupUi

    void retranslateUi(QWidget *ChatShowItem)
    {
        ChatShowItem->setWindowTitle(QApplication::translate("ChatShowItem", "Form", Q_NULLPTR));
        userIcon->setText(QString());
        nickname->setText(QString());
        delChat->setText(QString());
        unreadMsg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChatShowItem: public Ui_ChatShowItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATSHOWITEM_H
