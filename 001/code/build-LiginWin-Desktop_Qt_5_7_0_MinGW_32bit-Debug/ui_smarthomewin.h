/********************************************************************************
** Form generated from reading UI file 'smarthomewin.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTHOMEWIN_H
#define UI_SMARTHOMEWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartHomeWin
{
public:
    QWidget *centralwidget;
    QToolButton *toolButton;
    QGroupBox *groupBox;
    QCheckBox *TTcB;
    QCheckBox *ccB;
    QCheckBox *TRoom;

    void setupUi(QMainWindow *SmartHomeWin)
    {
        if (SmartHomeWin->objectName().isEmpty())
            SmartHomeWin->setObjectName(QStringLiteral("SmartHomeWin"));
        SmartHomeWin->resize(576, 318);
        centralwidget = new QWidget(SmartHomeWin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(480, 260, 91, 31));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 70, 521, 101));
        QFont font;
        font.setPointSize(25);
        groupBox->setFont(font);
        TTcB = new QCheckBox(groupBox);
        TTcB->setObjectName(QStringLiteral("TTcB"));
        TTcB->setGeometry(QRect(20, 40, 111, 41));
        TTcB->setFont(font);
        ccB = new QCheckBox(groupBox);
        ccB->setObjectName(QStringLiteral("ccB"));
        ccB->setGeometry(QRect(350, 30, 141, 61));
        ccB->setFont(font);
        TRoom = new QCheckBox(groupBox);
        TRoom->setObjectName(QStringLiteral("TRoom"));
        TRoom->setGeometry(QRect(200, 30, 141, 61));
        TRoom->setFont(font);
        SmartHomeWin->setCentralWidget(centralwidget);

        retranslateUi(SmartHomeWin);

        QMetaObject::connectSlotsByName(SmartHomeWin);
    } // setupUi

    void retranslateUi(QMainWindow *SmartHomeWin)
    {
        SmartHomeWin->setWindowTitle(QApplication::translate("SmartHomeWin", "MainWindow", 0));
        toolButton->setText(QApplication::translate("SmartHomeWin", "\350\277\224\345\233\236", 0));
        groupBox->setTitle(QApplication::translate("SmartHomeWin", "\347\201\257\345\205\211\346\216\247\345\210\266", 0));
        TTcB->setText(QApplication::translate("SmartHomeWin", "\345\256\242\345\216\205", 0));
        ccB->setText(QApplication::translate("SmartHomeWin", "\345\216\250\346\210\277", 0));
        TRoom->setText(QApplication::translate("SmartHomeWin", "\345\256\242\346\210\277", 0));
    } // retranslateUi

};

namespace Ui {
    class SmartHomeWin: public Ui_SmartHomeWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTHOMEWIN_H
