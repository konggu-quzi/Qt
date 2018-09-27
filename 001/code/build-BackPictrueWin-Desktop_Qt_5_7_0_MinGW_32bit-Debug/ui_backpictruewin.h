/********************************************************************************
** Form generated from reading UI file 'backpictruewin.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKPICTRUEWIN_H
#define UI_BACKPICTRUEWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BackPictrueWin
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;

    void setupUi(QMainWindow *BackPictrueWin)
    {
        if (BackPictrueWin->objectName().isEmpty())
            BackPictrueWin->setObjectName(QStringLiteral("BackPictrueWin"));
        BackPictrueWin->resize(800, 480);
        BackPictrueWin->setStyleSheet(QStringLiteral("QMainWindow{border-image: url(:/new/prefix1/main.jpg);}"));
        centralWidget = new QWidget(BackPictrueWin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 160, 122, 122));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/down.jpg);"));
        BackPictrueWin->setCentralWidget(centralWidget);

        retranslateUi(BackPictrueWin);

        QMetaObject::connectSlotsByName(BackPictrueWin);
    } // setupUi

    void retranslateUi(QMainWindow *BackPictrueWin)
    {
        BackPictrueWin->setWindowTitle(QApplication::translate("BackPictrueWin", "BackPictrueWin", 0));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BackPictrueWin: public Ui_BackPictrueWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKPICTRUEWIN_H
