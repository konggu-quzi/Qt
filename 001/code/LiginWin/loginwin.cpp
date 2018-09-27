#include "loginwin.h"
#include "ui_loginwin.h"
#include <QDebug>
#include "mainwin.h"

LoginWin::LoginWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWin)
{
    ui->setupUi(this);

    //把按钮的信号与本窗口的槽函数进行关联
    connect(ui->loginBt,SIGNAL(clicked(bool)),this,SLOT(login_funcation()));
    connect(ui->cancelBt, SIGNAL(clicked(bool)),this, SLOT(close_funcation()));
}

LoginWin::~LoginWin()
{
    delete ui;
}

void LoginWin::login_funcation()
{
    qDebug()<<ui->userEdit->text()<<ui->passEdit->text();

    if(ui->userEdit->text() == "hqd" && ui->passEdit->text() == "123")
    {
        //登录成功---跳转到主界面
        qDebug()<<"登录成功";

        //创建主界面
        MainWin *mwin =  new MainWin();
        mwin->show();
        this->close();
    }
}

void LoginWin::close_funcation()
{
    close();
}

void LoginWin::on_loginBt_clicked()
{
    qDebug()<<"login";
}

void LoginWin::on_cancelBt_clicked()
{
    qDebug()<<"close";
}
