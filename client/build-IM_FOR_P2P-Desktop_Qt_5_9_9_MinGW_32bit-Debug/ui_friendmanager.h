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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FriendManager
{
public:
    QLineEdit *searchBar;
    QPushButton *searchButton;
    QWidget *showWidget;
    QListWidget *listWidget;

    void setupUi(QWidget *FriendManager)
    {
        if (FriendManager->objectName().isEmpty())
            FriendManager->setObjectName(QStringLiteral("FriendManager"));
        FriendManager->resize(740, 600);
        searchBar = new QLineEdit(FriendManager);
        searchBar->setObjectName(QStringLiteral("searchBar"));
        searchBar->setGeometry(QRect(10, 20, 150, 20));
        searchButton = new QPushButton(FriendManager);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(160, 20, 50, 20));
        searchButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resource/Images/searchIcon .png"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon);
        showWidget = new QWidget(FriendManager);
        showWidget->setObjectName(QStringLiteral("showWidget"));
        showWidget->setGeometry(QRect(210, 20, 530, 580));
        listWidget = new QListWidget(FriendManager);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 60, 200, 531));

        retranslateUi(FriendManager);

        QMetaObject::connectSlotsByName(FriendManager);
    } // setupUi

    void retranslateUi(QWidget *FriendManager)
    {
        FriendManager->setWindowTitle(QApplication::translate("FriendManager", "Form", Q_NULLPTR));
        searchButton->setText(QApplication::translate("FriendManager", "\346\220\234\347\264\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FriendManager: public Ui_FriendManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDMANAGER_H
