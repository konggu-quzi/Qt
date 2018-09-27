#include "designercalckey.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DesignerCalcKey w;
    w.show();

    return a.exec();
}
