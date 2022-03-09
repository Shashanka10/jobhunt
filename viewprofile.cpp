#include "viewprofile.h"
#include "ui_viewprofile.h"
#include "dialog.h"
#include "editprofile.h"

viewprofile::viewprofile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewprofile)
{
    ui->setupUi(this);
}

viewprofile::~viewprofile()
{
    delete ui;
}

void viewprofile::on_pushButton_backvp_clicked()
{
    hide();
    Dialog *secdialog = new Dialog(this);
    secdialog->show();
}


void viewprofile::on_pushButton_editvp_clicked()
{
    hide();
    editprofile *epfp =new editprofile(this);
    epfp->show();
}

