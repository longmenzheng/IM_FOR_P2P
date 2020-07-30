/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *msgButton;
    QPushButton *friendButton;
    QPushButton *groupButton;
    QListWidget *ChatManager;
    QToolBox *FriendManager;
    QWidget *page_1;
    QPushButton *pushButton_2;
    QWidget *page_2;
    QToolBox *GroupManager;
    QWidget *page;
    QPushButton *pushButton;
    QWidget *page_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        msgButton = new QPushButton(centralwidget);
        msgButton->setObjectName(QStringLiteral("msgButton"));
        msgButton->setGeometry(QRect(0, 60, 51, 51));
        friendButton = new QPushButton(centralwidget);
        friendButton->setObjectName(QStringLiteral("friendButton"));
        friendButton->setGeometry(QRect(0, 120, 51, 51));
        groupButton = new QPushButton(centralwidget);
        groupButton->setObjectName(QStringLiteral("groupButton"));
        groupButton->setGeometry(QRect(0, 180, 51, 51));
        ChatManager = new QListWidget(centralwidget);
        new QListWidgetItem(ChatManager);
        new QListWidgetItem(ChatManager);
        ChatManager->setObjectName(QStringLiteral("ChatManager"));
        ChatManager->setGeometry(QRect(50, 0, 200, 600));
        FriendManager = new QToolBox(centralwidget);
        FriendManager->setObjectName(QStringLiteral("FriendManager"));
        FriendManager->setGeometry(QRect(50, 0, 200, 600));
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        page_1->setGeometry(QRect(0, 0, 200, 548));
        pushButton_2 = new QPushButton(page_1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 90, 75, 23));
        FriendManager->addItem(page_1, QStringLiteral("Page 1"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 200, 548));
        FriendManager->addItem(page_2, QStringLiteral("Page 2"));
        GroupManager = new QToolBox(centralwidget);
        GroupManager->setObjectName(QStringLiteral("GroupManager"));
        GroupManager->setGeometry(QRect(50, 0, 200, 600));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 200, 548));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 60, 71, 23));
        GroupManager->addItem(page, QStringLiteral("Page 1"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 200, 548));
        GroupManager->addItem(page_3, QStringLiteral("Page 2"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        FriendManager->setCurrentIndex(0);
        GroupManager->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        msgButton->setText(QApplication::translate("MainWindow", "\346\266\210\346\201\257", Q_NULLPTR));
        friendButton->setText(QApplication::translate("MainWindow", "\345\245\275\345\217\213", Q_NULLPTR));
        groupButton->setText(QApplication::translate("MainWindow", "\347\276\244", Q_NULLPTR));

        const bool __sortingEnabled = ChatManager->isSortingEnabled();
        ChatManager->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = ChatManager->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "\351\234\200\350\246\201\350\207\252\345\256\232\344\271\211\350\201\212\345\244\251\346\230\276\347\244\272\346\216\247\344\273\2661", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = ChatManager->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "\351\234\200\350\246\201\350\207\252\345\256\232\344\271\211\350\201\212\345\244\251\346\230\276\347\244\272\346\216\247\344\273\2662", Q_NULLPTR));
        ChatManager->setSortingEnabled(__sortingEnabled);

        pushButton_2->setText(QApplication::translate("MainWindow", "\345\245\275\345\217\213", Q_NULLPTR));
        FriendManager->setItemText(FriendManager->indexOf(page_1), QApplication::translate("MainWindow", "Page 1", Q_NULLPTR));
        FriendManager->setItemText(FriendManager->indexOf(page_2), QApplication::translate("MainWindow", "Page 2", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\347\276\244", Q_NULLPTR));
        GroupManager->setItemText(GroupManager->indexOf(page), QApplication::translate("MainWindow", "Page 1", Q_NULLPTR));
        GroupManager->setItemText(GroupManager->indexOf(page_3), QApplication::translate("MainWindow", "Page 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
