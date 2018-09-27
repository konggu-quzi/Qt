#include "layoutwin.h"
#include "ui_layoutwin.h"

LayoutWin::LayoutWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LayoutWin)
{
    ui->setupUi(this);
}

LayoutWin::~LayoutWin()
{
    delete ui;
}
