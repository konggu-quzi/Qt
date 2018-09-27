#ifndef SMARTHOMEWIN_H
#define SMARTHOMEWIN_H

#include <QMainWindow>

namespace Ui {
class SmartHomeWin;
}

class SmartHomeWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit SmartHomeWin(QWidget *parent = 0);
    ~SmartHomeWin();

private slots:
    void on_toolButton_clicked();

private:
    Ui::SmartHomeWin *ui;
};

#endif // SMARTHOMEWIN_H
