/********************************************************************************
** Form generated from reading UI file 'lineedittest.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINEEDITTEST_H
#define UI_LINEEDITTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LineEditTest
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LineEditTest)
    {
        if (LineEditTest->objectName().isEmpty())
            LineEditTest->setObjectName(QStringLiteral("LineEditTest"));
        LineEditTest->resize(660, 488);
        centralWidget = new QWidget(LineEditTest);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(true);
        lineEdit->setGeometry(QRect(120, 40, 371, 41));
        lineEdit->setStyleSheet(QStringLiteral("color: rgb(231, 89, 255);"));
        lineEdit->setMaxLength(1666666666);
        lineEdit->setEchoMode(QLineEdit::Password);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(false);
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 160, 113, 20));
        LineEditTest->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LineEditTest);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 660, 23));
        LineEditTest->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LineEditTest);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LineEditTest->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(LineEditTest);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LineEditTest->setStatusBar(statusBar);

        retranslateUi(LineEditTest);

        QMetaObject::connectSlotsByName(LineEditTest);
    } // setupUi

    void retranslateUi(QMainWindow *LineEditTest)
    {
        LineEditTest->setWindowTitle(QApplication::translate("LineEditTest", "LineEditTest", 0));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("LineEditTest", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0));
    } // retranslateUi

};

namespace Ui {
    class LineEditTest: public Ui_LineEditTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINEEDITTEST_H
