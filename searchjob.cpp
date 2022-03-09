#include "searchjob.h"
#include "ui_searchjob.h"
#include <QPixmap>
#include "dialog.h"

searchjob::searchjob(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::searchjob)
{
    ui->setupUi(this);
    QPixmap sjob(":/resources/image/jobsearch.png");
    ui->label_scj->setPixmap(sjob.scaled(50,50,Qt::KeepAspectRatio));

    ui->textEdit->setPlaceholderText("Search By Job Title");
}

searchjob::~searchjob()
{
    delete ui;
}

void searchjob::on_pushButton_back_clicked()
{
    hide();
    Dialog *secdialog =new Dialog(this);
    secdialog->show();

}

