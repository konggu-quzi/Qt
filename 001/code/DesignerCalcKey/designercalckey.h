#ifndef DESIGNERCALCKEY_H
#define DESIGNERCALCKEY_H

#include <QMainWindow>

namespace Ui {
class DesignerCalcKey;
}

class DesignerCalcKey : public QMainWindow
{
    Q_OBJECT

public:
    explicit DesignerCalcKey(QWidget *parent = 0);
    ~DesignerCalcKey();

private:
    Ui::DesignerCalcKey *ui;
};

#endif // DESIGNERCALCKEY_H
