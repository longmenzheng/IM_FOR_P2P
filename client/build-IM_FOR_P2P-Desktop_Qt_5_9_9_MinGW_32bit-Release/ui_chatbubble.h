/********************************************************************************
** Form generated from reading UI file 'chatbubble.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATBUBBLE_H
#define UI_CHATBUBBLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatBubble
{
public:
    QPushButton *iconLeft;
    QPushButton *iconRight;
    QLabel *userNickname;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *ChatBubble)
    {
        if (ChatBubble->objectName().isEmpty())
            ChatBubble->setObjectName(QStringLiteral("ChatBubble"));
        ChatBubble->resize(400, 251);
        iconLeft = new QPushButton(ChatBubble);
        iconLeft->setObjectName(QStringLiteral("iconLeft"));
        iconLeft->setGeometry(QRect(10, 10, 40, 40));
        iconRight = new QPushButton(ChatBubble);
        iconRight->setObjectName(QStringLiteral("iconRight"));
        iconRight->setGeometry(QRect(350, 10, 40, 40));
        userNickname = new QLabel(ChatBubble);
        userNickname->setObjectName(QStringLiteral("userNickname"));
        userNickname->setGeometry(QRect(50, 10, 301, 20));
        textBrowser = new QTextBrowser(ChatBubble);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(60, 50, 281, 121));

        retranslateUi(ChatBubble);

        QMetaObject::connectSlotsByName(ChatBubble);
    } // setupUi

    void retranslateUi(QWidget *ChatBubble)
    {
        ChatBubble->setWindowTitle(QApplication::translate("ChatBubble", "Form", Q_NULLPTR));
        iconLeft->setText(QString());
        iconRight->setText(QString());
        userNickname->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChatBubble: public Ui_ChatBubble {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATBUBBLE_H
