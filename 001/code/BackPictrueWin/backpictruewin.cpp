
#include "backpictruewin.h"
#include "ui_backpictruewin.h"

BackPictrueWin::BackPictrueWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BackPictrueWin)
{
    ui->setupUi(this);
}

BackPictrueWin::~BackPictrueWin()
{
    delete ui;
}

void BackPictrueWin::on_pushButton_pressed()
{
    ui->pushButton->setStyleSheet("border-image: url(:/new/prefix1/up.jpg);");
}

void BackPictrueWin::on_pushButton_released()
{
    ui->pushButton->setStyleSheet("border-image: url(:/new/prefix1/down.jpg);");
}
