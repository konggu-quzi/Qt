#include "layoutwin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LayoutWin w;
    w.show();

    return a.exec();
}
