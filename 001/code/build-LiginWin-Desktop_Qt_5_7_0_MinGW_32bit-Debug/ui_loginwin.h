/********************************************************************************
** Form generated from reading UI file 'loginwin.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIN_H
#define UI_LOGINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWin
{
public:
    QWidget *centralWidget;
    QLabel *titleLabel;
    QLineEdit *userEdit;
    QLineEdit *passEdit;
    QPushButton *cancelBt;
    QPushButton *loginBt;

    void setupUi(QMainWindow *LoginWin)
    {
        if (LoginWin->objectName().isEmpty())
            LoginWin->setObjectName(QStringLiteral("LoginWin"));
        LoginWin->resize(595, 389);
        centralWidget = new QWidget(LoginWin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        titleLabel = new QLabel(centralWidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(0, 0, 591, 101));
        QFont font;
        font.setPointSize(35);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QStringLiteral("color: rgb(255, 19, 94);"));
        titleLabel->setAlignment(Qt::AlignCenter);
        userEdit = new QLineEdit(centralWidget);
        userEdit->setObjectName(QStringLiteral("userEdit"));
        userEdit->setGeometry(QRect(150, 130, 271, 51));
        QFont font1;
        font1.setPointSize(16);
        userEdit->setFont(font1);
        passEdit = new QLineEdit(centralWidget);
        passEdit->setObjectName(QStringLiteral("passEdit"));
        passEdit->setGeometry(QRect(150, 190, 271, 51));
        passEdit->setFont(font1);
        passEdit->setEchoMode(QLineEdit::Password);
        cancelBt = new QPushButton(centralWidget);
        cancelBt->setObjectName(QStringLiteral("cancelBt"));
        cancelBt->setGeometry(QRect(120, 270, 121, 61));
        cancelBt->setFont(font1);
        loginBt = new QPushButton(centralWidget);
        loginBt->setObjectName(QStringLiteral("loginBt"));
        loginBt->setGeometry(QRect(340, 270, 121, 61));
        loginBt->setFont(font1);
        LoginWin->setCentralWidget(centralWidget);

        retranslateUi(LoginWin);

        QMetaObject::connectSlotsByName(LoginWin);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWin)
    {
        LoginWin->setWindowTitle(QApplication::translate("LoginWin", "LoginWin", 0));
        titleLabel->setText(QApplication::translate("LoginWin", "\346\254\242\350\277\216\344\275\277\347\224\250XXX\347\263\273\347\273\237", 0));
        userEdit->setPlaceholderText(QApplication::translate("LoginWin", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", 0));
        passEdit->setPlaceholderText(QApplication::translate("LoginWin", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0));
        cancelBt->setText(QApplication::translate("LoginWin", "\346\263\250\351\224\200", 0));
        loginBt->setText(QApplication::translate("LoginWin", "\347\231\273\345\275\225", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginWin: public Ui_LoginWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIN_H
