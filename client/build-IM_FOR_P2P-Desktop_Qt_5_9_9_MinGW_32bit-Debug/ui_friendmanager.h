/********************************************************************************
** Form generated from reading UI file 'friendmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDMANAGER_H
#define UI_FRIENDMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FriendManager
{
public:
    QToolBox *FriendManager_2;
    QWidget *page_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QWidget *page_2;
    QLineEdit *searchBar;
    QPushButton *searchButton;

    void setupUi(QWidget *FriendManager)
    {
        if (FriendManager->objectName().isEmpty())
            FriendManager->setObjectName(QStringLiteral("FriendManager"));
        FriendManager->resize(740, 600);
        FriendManager_2 = new QToolBox(FriendManager);
        FriendManager_2->setObjectName(QStringLiteral("FriendManager_2"));
        FriendManager_2->setGeometry(QRect(10, 60, 200, 540));
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        page_1->setGeometry(QRect(0, 0, 200, 488));
        pushButton_2 = new QPushButton(page_1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 90, 75, 23));
        pushButton = new QPushButton(page_1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 140, 75, 23));
        pushButton_3 = new QPushButton(page_1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 190, 75, 23));
        FriendManager_2->addItem(page_1, QStringLiteral("Page 1"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 200, 488));
        FriendManager_2->addItem(page_2, QStringLiteral("Page 2"));
        searchBar = new QLineEdit(FriendManager);
        searchBar->setObjectName(QStringLiteral("searchBar"));
        searchBar->setGeometry(QRect(10, 20, 150, 20));
        searchButton = new QPushButton(FriendManager);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(160, 20, 50, 20));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resource/Images/searchIcon .png"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon);

        retranslateUi(FriendManager);

        FriendManager_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FriendManager);
    } // setupUi

    void retranslateUi(QWidget *FriendManager)
    {
        FriendManager->setWindowTitle(QApplication::translate("FriendManager", "Form", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FriendManager", "\345\245\275\345\217\2131", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FriendManager", "\345\245\275\345\217\2132", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("FriendManager", "\345\245\275\345\217\2133", Q_NULLPTR));
        FriendManager_2->setItemText(FriendManager_2->indexOf(page_1), QApplication::translate("FriendManager", "Page 1", Q_NULLPTR));
        FriendManager_2->setItemText(FriendManager_2->indexOf(page_2), QApplication::translate("FriendManager", "Page 2", Q_NULLPTR));
        searchButton->setText(QApplication::translate("FriendManager", "\346\220\234\347\264\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FriendManager: public Ui_FriendManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDMANAGER_H
