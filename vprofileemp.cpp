#include "vprofileemp.h"
#include "ui_vprofileemp.h"

vprofileemp::vprofileemp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vprofileemp)
{
    ui->setupUi(this);
}

vprofileemp::~vprofileemp()
{
    delete ui;
}
