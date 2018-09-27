#include "lineedittest.h"
#include "ui_lineedittest.h"

LineEditTest::LineEditTest(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LineEditTest)
{
    ui->setupUi(this);
}

LineEditTest::~LineEditTest()
{
    delete ui;
}
