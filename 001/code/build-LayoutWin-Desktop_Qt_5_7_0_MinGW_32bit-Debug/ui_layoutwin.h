/********************************************************************************
** Form generated from reading UI file 'layoutwin.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTWIN_H
#define UI_LAYOUTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayoutWin
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_4;
    QToolButton *toolButton_3;
    QToolButton *toolButton_7;
    QToolButton *toolButton_8;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QSpacerItem *horizontalSpacer;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *toolButton_9;
    QToolButton *toolButton_10;
    QToolButton *toolButton_11;
    QToolButton *toolButton_12;
    QToolButton *toolButton_13;
    QToolButton *toolButton_14;
    QToolButton *toolButton_15;
    QToolButton *toolButton_16;
    QToolButton *toolButton_17;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *toolButton_18;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QMainWindow *LayoutWin)
    {
        if (LayoutWin->objectName().isEmpty())
            LayoutWin->setObjectName(QStringLiteral("LayoutWin"));
        LayoutWin->resize(671, 572);
        LayoutWin->setStyleSheet(QStringLiteral("QMainWindow{border-image: url(:/new/prefix1/back.jpg);}"));
        centralWidget = new QWidget(LayoutWin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 651, 561));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 60));
        label->setMaximumSize(QSize(60, 16777215));
        label->setStyleSheet(QStringLiteral("background-color: rgb(255, 220, 255);"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 162, 255);"));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        toolButton = new QToolButton(widget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy);
        toolButton->setMinimumSize(QSize(40, 40));
        toolButton->setMaximumSize(QSize(40, 40));
        toolButton->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/b1.png);"));

        horizontalLayout_2->addWidget(toolButton);

        toolButton_2 = new QToolButton(widget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        sizePolicy.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy);
        toolButton_2->setMinimumSize(QSize(40, 40));
        toolButton_2->setMaximumSize(QSize(40, 40));
        toolButton_2->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/b1.png);"));

        horizontalLayout_2->addWidget(toolButton_2);

        toolButton_4 = new QToolButton(widget);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        sizePolicy.setHeightForWidth(toolButton_4->sizePolicy().hasHeightForWidth());
        toolButton_4->setSizePolicy(sizePolicy);
        toolButton_4->setMinimumSize(QSize(40, 40));
        toolButton_4->setMaximumSize(QSize(40, 40));
        toolButton_4->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/b1.png);"));

        horizontalLayout_2->addWidget(toolButton_4);

        toolButton_3 = new QToolButton(widget);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        sizePolicy.setHeightForWidth(toolButton_3->sizePolicy().hasHeightForWidth());
        toolButton_3->setSizePolicy(sizePolicy);
        toolButton_3->setMinimumSize(QSize(40, 40));
        toolButton_3->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(toolButton_3);

        toolButton_7 = new QToolButton(widget);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));
        sizePolicy.setHeightForWidth(toolButton_7->sizePolicy().hasHeightForWidth());
        toolButton_7->setSizePolicy(sizePolicy);
        toolButton_7->setMinimumSize(QSize(40, 40));
        toolButton_7->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(toolButton_7);

        toolButton_8 = new QToolButton(widget);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));
        sizePolicy.setHeightForWidth(toolButton_8->sizePolicy().hasHeightForWidth());
        toolButton_8->setSizePolicy(sizePolicy);
        toolButton_8->setMinimumSize(QSize(40, 40));
        toolButton_8->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(toolButton_8);

        toolButton_5 = new QToolButton(widget);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        sizePolicy.setHeightForWidth(toolButton_5->sizePolicy().hasHeightForWidth());
        toolButton_5->setSizePolicy(sizePolicy);
        toolButton_5->setMinimumSize(QSize(40, 40));
        toolButton_5->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(toolButton_5);

        toolButton_6 = new QToolButton(widget);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        sizePolicy.setHeightForWidth(toolButton_6->sizePolicy().hasHeightForWidth());
        toolButton_6->setSizePolicy(sizePolicy);
        toolButton_6->setMinimumSize(QSize(40, 40));
        toolButton_6->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(toolButton_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        toolButton_9 = new QToolButton(widget);
        toolButton_9->setObjectName(QStringLiteral("toolButton_9"));
        sizePolicy.setHeightForWidth(toolButton_9->sizePolicy().hasHeightForWidth());
        toolButton_9->setSizePolicy(sizePolicy);
        toolButton_9->setMinimumSize(QSize(40, 40));
        toolButton_9->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(toolButton_9);

        toolButton_10 = new QToolButton(widget);
        toolButton_10->setObjectName(QStringLiteral("toolButton_10"));
        sizePolicy.setHeightForWidth(toolButton_10->sizePolicy().hasHeightForWidth());
        toolButton_10->setSizePolicy(sizePolicy);
        toolButton_10->setMinimumSize(QSize(40, 40));
        toolButton_10->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(toolButton_10);

        toolButton_11 = new QToolButton(widget);
        toolButton_11->setObjectName(QStringLiteral("toolButton_11"));
        sizePolicy.setHeightForWidth(toolButton_11->sizePolicy().hasHeightForWidth());
        toolButton_11->setSizePolicy(sizePolicy);
        toolButton_11->setMinimumSize(QSize(40, 40));
        toolButton_11->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(toolButton_11);

        toolButton_12 = new QToolButton(widget);
        toolButton_12->setObjectName(QStringLiteral("toolButton_12"));
        sizePolicy.setHeightForWidth(toolButton_12->sizePolicy().hasHeightForWidth());
        toolButton_12->setSizePolicy(sizePolicy);
        toolButton_12->setMinimumSize(QSize(40, 40));
        toolButton_12->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(toolButton_12);

        toolButton_13 = new QToolButton(widget);
        toolButton_13->setObjectName(QStringLiteral("toolButton_13"));
        sizePolicy.setHeightForWidth(toolButton_13->sizePolicy().hasHeightForWidth());
        toolButton_13->setSizePolicy(sizePolicy);
        toolButton_13->setMinimumSize(QSize(40, 40));
        toolButton_13->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(toolButton_13);

        toolButton_14 = new QToolButton(widget);
        toolButton_14->setObjectName(QStringLiteral("toolButton_14"));
        sizePolicy.setHeightForWidth(toolButton_14->sizePolicy().hasHeightForWidth());
        toolButton_14->setSizePolicy(sizePolicy);
        toolButton_14->setMinimumSize(QSize(40, 40));
        toolButton_14->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(toolButton_14);

        toolButton_15 = new QToolButton(widget);
        toolButton_15->setObjectName(QStringLiteral("toolButton_15"));
        sizePolicy.setHeightForWidth(toolButton_15->sizePolicy().hasHeightForWidth());
        toolButton_15->setSizePolicy(sizePolicy);
        toolButton_15->setMinimumSize(QSize(40, 40));
        toolButton_15->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(toolButton_15);

        toolButton_16 = new QToolButton(widget);
        toolButton_16->setObjectName(QStringLiteral("toolButton_16"));
        sizePolicy.setHeightForWidth(toolButton_16->sizePolicy().hasHeightForWidth());
        toolButton_16->setSizePolicy(sizePolicy);
        toolButton_16->setMinimumSize(QSize(40, 40));
        toolButton_16->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(toolButton_16);

        toolButton_17 = new QToolButton(widget);
        toolButton_17->setObjectName(QStringLiteral("toolButton_17"));
        sizePolicy.setHeightForWidth(toolButton_17->sizePolicy().hasHeightForWidth());
        toolButton_17->setSizePolicy(sizePolicy);
        toolButton_17->setMinimumSize(QSize(40, 40));
        toolButton_17->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(toolButton_17);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        toolButton_18 = new QToolButton(widget);
        toolButton_18->setObjectName(QStringLiteral("toolButton_18"));
        sizePolicy.setHeightForWidth(toolButton_18->sizePolicy().hasHeightForWidth());
        toolButton_18->setSizePolicy(sizePolicy);
        toolButton_18->setMinimumSize(QSize(40, 40));
        toolButton_18->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(toolButton_18);


        verticalLayout->addLayout(horizontalLayout_3);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMaximumSize(QSize(16777215, 120));

        verticalLayout->addWidget(textEdit);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_4->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_4);

        LayoutWin->setCentralWidget(centralWidget);

        retranslateUi(LayoutWin);

        QMetaObject::connectSlotsByName(LayoutWin);
    } // setupUi

    void retranslateUi(QMainWindow *LayoutWin)
    {
        LayoutWin->setWindowTitle(QApplication::translate("LayoutWin", "LayoutWin", 0));
        label->setText(QString());
        label_2->setText(QString());
        toolButton->setText(QApplication::translate("LayoutWin", "...", 0));
        toolButton_2->setText(QApplication::translate("LayoutWin", "...", 0));
        toolButton_4->setText(QApplication::translate("LayoutWin", "...", 0));
        toolButton_3->setText(QApplication::translate("LayoutWin", "...", 0));
        toolButton_7->setText(QApplication::translate("LayoutWin", "...", 0));
        toolButton_8->setText(QApplication::translate("LayoutWin", "...", 0));
        toolButton_5->setText(QApplication::translate("LayoutWin", "...", 0));
        toolButton_6->setText(QApplication::translate("LayoutWin", "...", 0));
        toolButton_9->setText(QApplication::translate("LayoutWin", "...", 0));
        toolButton_10->setText(QApplication::translate("LayoutWin", "...", 0));
        toolButton_11->setText(QApplication::translate("LayoutWin", "...", 0));
        toolButton_12->setText(QApplication::translate("LayoutWin", "...", 0));
        toolButton_13->setText(QApplication::translate("LayoutWin", "...", 0));
        toolButton_14->setText(QApplication::translate("LayoutWin", "...", 0));
        toolButton_15->setText(QApplication::translate("LayoutWin", "...", 0));
        toolButton_16->setText(QApplication::translate("LayoutWin", "...", 0));
        toolButton_17->setText(QApplication::translate("LayoutWin", "...", 0));
        toolButton_18->setText(QApplication::translate("LayoutWin", "...", 0));
        pushButton_2->setText(QApplication::translate("LayoutWin", "\345\205\263\351\227\255", 0));
        pushButton->setText(QApplication::translate("LayoutWin", "\345\217\221\351\200\201", 0));
    } // retranslateUi

};

namespace Ui {
    class LayoutWin: public Ui_LayoutWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTWIN_H
