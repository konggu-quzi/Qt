#include "filetext.h"
#include "ui_filetext.h"

#include <QFile>
#include <QFileDialog>


FileText::FileText(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FileText)
{
    ui->setupUi(this);
}

FileText::~FileText()
{
    delete ui;
}

void FileText::on_openBt_clicked()
{
    //获取文件路径
    QString filepath = QFileDialog::getOpenFileName(this);
    ui->listWidget->addItem(filepath);
    //打开文件
    QFile file(filepath);
    file.open(QIODevice::ReadOnly);
    QString filemsg = file.readAll();//读取文件所有数据存储在filemsg对象中
    file.close();//关闭文件
    //把读取的数据添加到文本编辑框中
    ui->textEdit->setText(filemsg);
    //ui->textEdit->setText("<span style=\" color:#ff5500;\">"+filemsg+"</span>");
}


void FileText::on_saveBt_clicked()
{
    //获取保存文件路径
    QString filepath = QFileDialog::getSaveFileName(this);
    //打开文件
    QFile file(filepath);
    file.open(QIODevice::WriteOnly);
    QString filemsg = ui->textEdit->toPlainText();//从文本编辑框中获取内容
    file.write(filemsg.toUtf8());//把文本内容转换为utf8写入文件
    file.close();//关闭文件
}
