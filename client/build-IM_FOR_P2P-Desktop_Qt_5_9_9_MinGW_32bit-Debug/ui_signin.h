/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignIn
{
public:
    QPushButton *signIn;
    QPushButton *signUp;
    QLineEdit *userID;
    QLineEdit *password;

    void setupUi(QWidget *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName(QStringLiteral("SignIn"));
        SignIn->resize(400, 300);
        signIn = new QPushButton(SignIn);
        signIn->setObjectName(QStringLiteral("signIn"));
        signIn->setGeometry(QRect(90, 230, 75, 23));
        signUp = new QPushButton(SignIn);
        signUp->setObjectName(QStringLiteral("signUp"));
        signUp->setGeometry(QRect(210, 230, 75, 23));
        userID = new QLineEdit(SignIn);
        userID->setObjectName(QStringLiteral("userID"));
        userID->setGeometry(QRect(90, 160, 191, 21));
        password = new QLineEdit(SignIn);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(90, 120, 191, 21));

        retranslateUi(SignIn);

        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QWidget *SignIn)
    {
        SignIn->setWindowTitle(QApplication::translate("SignIn", "Form", Q_NULLPTR));
        signIn->setText(QApplication::translate("SignIn", "\347\231\273\345\275\225", Q_NULLPTR));
        signUp->setText(QApplication::translate("SignIn", "\346\263\250\345\206\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
