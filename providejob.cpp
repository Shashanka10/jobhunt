#include "providejob.h"
#include "ui_providejob.h"

providejob::providejob(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::providejob)
{
    ui->setupUi(this);
}

providejob::~providejob()
{
    delete ui;
}
