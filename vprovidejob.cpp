#include "vprovidejob.h"
#include "ui_vprovidejob.h"

vprovidejob::vprovidejob(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vprovidejob)
{
    ui->setupUi(this);
}

vprovidejob::~vprovidejob()
{
    delete ui;
}
