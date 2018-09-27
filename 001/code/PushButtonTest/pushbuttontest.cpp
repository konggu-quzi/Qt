#include "pushbuttontest.h"
#include "ui_pushbuttontest.h"

PushButtonTest::PushButtonTest(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PushButtonTest)
{
    ui->setupUi(this);
}

PushButtonTest::~PushButtonTest()
{
    delete ui;
}
