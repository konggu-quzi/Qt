#ifndef LAYOUTWIN_H
#define LAYOUTWIN_H

#include <QMainWindow>

namespace Ui {
class LayoutWin;
}

class LayoutWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit LayoutWin(QWidget *parent = 0);
    ~LayoutWin();

private:
    Ui::LayoutWin *ui;
};

#endif // LAYOUTWIN_H
