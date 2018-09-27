#include "mainwin.h"
#include "ui_mainwin.h"
#include <smarthomewin.h>

MainWin::MainWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWin)
{
    ui->setupUi(this);
}

MainWin::~MainWin()
{
    delete ui;
}

void MainWin::on_smartHomeBt_clicked()
{
    //进入到智能家居控制界面
    SmartHomeWin *win = new SmartHomeWin(this);
    win->show();//显示

    this->hide();//隐藏
}

void MainWin::on_pushButton_2_clicked()
{
    //进入到数码相框界面
}
