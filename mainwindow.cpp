#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/image/jobi.png");
    ui->label_pic->setPixmap(pix.scaled(250,250,Qt::KeepAspectRatio));
    QPixmap pic_1(":/resources/image/pp.png");
    ui->label_2->setPixmap(pic_1.scaled(25,25,Qt::KeepAspectRatio));
    QPixmap pic_2(":/resources/image/pass.jpg");
    ui->label_3->setPixmap(pic_2.scaled(20,20,Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if (username == "test" && password == "test"){

       // QMessageBox::information(this,"Login","Username and Password is correct");
        hide();
        secdialog = new Dialog(this);
        secdialog->show();
      //  ui->statusbar->showMessage("Username and Password is correct", 5000);
    }else if (username == "test1" && password =="test1")
    {
        hide();
        emp =new employer(this);
        emp->show();
    }else
    {
        QMessageBox::information(this,"Login","Username or Password is incorrect");
       // ui->statusbar->showMessage("Username and Password is incorrect", 5000);
    }
}


void MainWindow::on_pushButton_signup_clicked()
{
    hide();
    thirddialog = new signup_Dialog(this);
    thirddialog->show();
}


void MainWindow::on_pushButton_signupemp_clicked()
{
    hide();
    siemp = new signup_emp(this);
    siemp->show();
}

