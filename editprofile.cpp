#include "editprofile.h"
#include "ui_editprofile.h"
#include "viewprofile.h"

editprofile::editprofile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editprofile)
{
    ui->setupUi(this);
}

editprofile::~editprofile()
{
    delete ui;
}

void editprofile::on_pushButton_cancelep_clicked()
{
    hide();
    viewprofile *vpjob = new viewprofile(this);
    vpjob->show();
}

