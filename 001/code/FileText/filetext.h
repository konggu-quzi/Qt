#ifndef FILETEXT_H
#define FILETEXT_H

#include <QMainWindow>

namespace Ui {
class FileText;
}

class FileText : public QMainWindow
{
    Q_OBJECT

public:
    explicit FileText(QWidget *parent = 0);
    ~FileText();

private slots:
    void on_openBt_clicked();

    void on_saveBt_clicked();

private:
    Ui::FileText *ui;
};

#endif // FILETEXT_H
