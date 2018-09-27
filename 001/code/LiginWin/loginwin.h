#ifndef LOGINWIN_H
#define LOGINWIN_H

#include <QMainWindow>

namespace Ui {
class LoginWin;
}

class LoginWin : public QMainWindow
{
    Q_OBJECT
public:
    explicit LoginWin(QWidget *parent = 0);
    ~LoginWin();

//声明槽函数
private slots:
    void login_funcation();
    void close_funcation();

    void on_loginBt_clicked();
    void on_cancelBt_clicked();

private:
    Ui::LoginWin *ui;
};

#endif // LOGINWIN_H
