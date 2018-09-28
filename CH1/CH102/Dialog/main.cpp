#include "dialog.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();

    QString str = "ww";
    QByteArray ba = str.toUtf8();
    qDebug() << ba;
    
    return a.exec();
}
