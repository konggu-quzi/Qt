/********************************************************************************
** Form generated from reading UI file 'pushbuttontest.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUSHBUTTONTEST_H
#define UI_PUSHBUTTONTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PushButtonTest
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PushButtonTest)
    {
        if (PushButtonTest->objectName().isEmpty())
            PushButtonTest->setObjectName(QStringLiteral("PushButtonTest"));
        PushButtonTest->resize(484, 345);
        centralWidget = new QWidget(PushButtonTest);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(110, 20, 181, 81));
        pushButton->setMinimumSize(QSize(0, 0));
        pushButton->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font.setPointSize(25);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(false);
        pushButton->setFont(font);
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setStyleSheet(QLatin1String("color:rgb(255,0,0);\n"
"background-color: rgb(196, 137, 255);"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 140, 113, 20));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 180, 113, 20));
        PushButtonTest->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PushButtonTest);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 484, 23));
        PushButtonTest->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PushButtonTest);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PushButtonTest->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PushButtonTest);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PushButtonTest->setStatusBar(statusBar);

        retranslateUi(PushButtonTest);

        QMetaObject::connectSlotsByName(PushButtonTest);
    } // setupUi

    void retranslateUi(QMainWindow *PushButtonTest)
    {
        PushButtonTest->setWindowTitle(QApplication::translate("PushButtonTest", "PushButtonTest", 0));
        pushButton->setText(QApplication::translate("PushButtonTest", "\347\202\271\346\210\221", 0));
    } // retranslateUi

};

namespace Ui {
    class PushButtonTest: public Ui_PushButtonTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUSHBUTTONTEST_H
