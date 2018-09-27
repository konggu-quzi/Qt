/********************************************************************************
** Form generated from reading UI file 'mainwin.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIN_H
#define UI_MAINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWin
{
public:
    QWidget *centralwidget;
    QPushButton *smartHomeBt;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *MainWin)
    {
        if (MainWin->objectName().isEmpty())
            MainWin->setObjectName(QStringLiteral("MainWin"));
        MainWin->resize(650, 424);
        centralwidget = new QWidget(MainWin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        smartHomeBt = new QPushButton(centralwidget);
        smartHomeBt->setObjectName(QStringLiteral("smartHomeBt"));
        smartHomeBt->setGeometry(QRect(120, 140, 191, 101));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 140, 191, 101));
        MainWin->setCentralWidget(centralwidget);

        retranslateUi(MainWin);

        QMetaObject::connectSlotsByName(MainWin);
    } // setupUi

    void retranslateUi(QMainWindow *MainWin)
    {
        MainWin->setWindowTitle(QApplication::translate("MainWin", "MainWindow", 0));
        smartHomeBt->setText(QApplication::translate("MainWin", "\346\231\272\350\203\275\345\256\266\345\261\205", 0));
        pushButton_2->setText(QApplication::translate("MainWin", "\346\225\260\347\240\201\347\233\270\346\241\206", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWin: public Ui_MainWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIN_H
