/********************************************************************************
** Form generated from reading UI file 'filetext.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILETEXT_H
#define UI_FILETEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileText
{
public:
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QPushButton *openBt;
    QPushButton *saveBt;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FileText)
    {
        if (FileText->objectName().isEmpty())
            FileText->setObjectName(QStringLiteral("FileText"));
        FileText->resize(779, 522);
        centralWidget = new QWidget(FileText);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 371, 391));
        openBt = new QPushButton(centralWidget);
        openBt->setObjectName(QStringLiteral("openBt"));
        openBt->setGeometry(QRect(10, 420, 171, 23));
        saveBt = new QPushButton(centralWidget);
        saveBt->setObjectName(QStringLiteral("saveBt"));
        saveBt->setGeometry(QRect(210, 420, 171, 23));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(410, 10, 256, 192));
        FileText->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FileText);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 779, 23));
        FileText->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FileText);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FileText->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FileText);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FileText->setStatusBar(statusBar);

        retranslateUi(FileText);

        QMetaObject::connectSlotsByName(FileText);
    } // setupUi

    void retranslateUi(QMainWindow *FileText)
    {
        FileText->setWindowTitle(QApplication::translate("FileText", "FileText", 0));
        textEdit->setHtml(QApplication::translate("FileText", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff5500;\">hello world</span></p></body></html>", 0));
        openBt->setText(QApplication::translate("FileText", "\346\211\223\345\274\200\346\226\207\344\273\266", 0));
        saveBt->setText(QApplication::translate("FileText", "\344\277\235\345\255\230\346\226\207\344\273\266", 0));
    } // retranslateUi

};

namespace Ui {
    class FileText: public Ui_FileText {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILETEXT_H
