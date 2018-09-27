#ifndef PUSHBUTTONTEST_H
#define PUSHBUTTONTEST_H

#include <QMainWindow>

namespace Ui {
class PushButtonTest;
}

class PushButtonTest : public QMainWindow
{
    Q_OBJECT

public:
    explicit PushButtonTest(QWidget *parent = 0);
    ~PushButtonTest();

private:
    Ui::PushButtonTest *ui;
};

#endif // PUSHBUTTONTEST_H
