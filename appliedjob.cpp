#include "appliedjob.h"
#include "ui_appliedjob.h"

appliedjob::appliedjob(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::appliedjob)
{
    ui->setupUi(this);
}

appliedjob::~appliedjob()
{
    delete ui;
}
