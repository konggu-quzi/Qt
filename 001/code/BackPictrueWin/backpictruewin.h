#ifndef BACKPICTRUEWIN_H
#define BACKPICTRUEWIN_H

#include <QMainWindow>

namespace Ui {
class BackPictrueWin;
}

class BackPictrueWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit BackPictrueWin(QWidget *parent = 0);
    ~BackPictrueWin();

private slots:
    void on_pushButton_pressed();

    void on_pushButton_released();

private:
    Ui::BackPictrueWin *ui;
};

#endif // BACKPICTRUEWIN_H
