#include <QApplication>
#include <QWidget> //窗口
#include <QPushButton> //按键

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //创建字符串
    QString showstr = "789+456-123*0./<";
    //创建一个窗口
    QWidget window;
    //设置窗口大小
    window.resize(270,270);

    for(int i=0;i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            QPushButton *button = new QPushButton(&window);
            button->setGeometry(i*70,j*70,60,60);
            button->setText(showstr.at(j*4+i));
        }
    }
    window.show();
    return a.exec();
}
