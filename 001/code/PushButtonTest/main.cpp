#include "pushbuttontest.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PushButtonTest w;
    w.show();

    return a.exec();
}
