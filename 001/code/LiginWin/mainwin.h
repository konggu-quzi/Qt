#ifndef MAINWIN_H
#define MAINWIN_H

#include <QMainWindow>

namespace Ui {
class MainWin;
}

class MainWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWin(QWidget *parent = 0);
    ~MainWin();

private slots:
    void on_smartHomeBt_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWin *ui;
};

#endif // MAINWIN_H
