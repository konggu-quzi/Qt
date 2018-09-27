#include "designercalckey.h"
#include "ui_designercalckey.h"

DesignerCalcKey::DesignerCalcKey(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DesignerCalcKey)
{
    ui->setupUi(this);
}

DesignerCalcKey::~DesignerCalcKey()
{
    delete ui;
}
