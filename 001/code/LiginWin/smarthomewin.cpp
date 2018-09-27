#include "smarthomewin.h"
#include "ui_smarthomewin.h"

SmartHomeWin::SmartHomeWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SmartHomeWin)
{
    ui->setupUi(this);
}

SmartHomeWin::~SmartHomeWin()
{
    delete ui;
}

void SmartHomeWin::on_toolButton_clicked()
{
    //把主界面显示
    this->parentWidget()->show();
    delete this;
}
