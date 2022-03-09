#include "signup_dialog.h"
#include "ui_signup_dialog.h"
#include <QMessageBox>
#include "mainwindow.h"

signup_Dialog::signup_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup_Dialog)
{
    ui->setupUi(this);

    QPixmap vec(":/resources/image/reg.png");
    ui->label_signpic->setPixmap(vec.scaled(200,400));



    /*place holder*/
    ui->lineEdit_phonenum->setPlaceholderText("Phone Number");
    ui->lineEdit_address->setPlaceholderText("Address");
    ui->lineEdit_user->setPlaceholderText("User Name");
    ui->lineEdit_gmail->setPlaceholderText("Gmail");
    ui->lineEdit_pass->setPlaceholderText("Password");
    ui->lineEdit_confpass->setPlaceholderText("Confirm Password");

    //icon//
    QIcon phnnum(":/resources/image/phone.png");
    ui->lineEdit_phonenum->addAction(phnnum,QLineEdit::LeadingPosition);
    QIcon adress(":/resources/image/address.png");
    ui->lineEdit_address->addAction(adress,QLineEdit::LeadingPosition);
    QIcon use(":/resources/image/user.png");
    ui->lineEdit_user->addAction(use,QLineEdit::LeadingPosition);
    QIcon gma(":/resources/image/gmail.png");
    ui->lineEdit_gmail->addAction(gma,QLineEdit::LeadingPosition);
    QIcon pas(":/resources/image/password.jpg");
    ui->lineEdit_pass->addAction(pas,QLineEdit::LeadingPosition);
    ui->lineEdit_confpass->addAction(pas,QLineEdit::LeadingPosition);


}

signup_Dialog::~signup_Dialog()
{
    delete ui;
}

void signup_Dialog::on_pushButton_sign_clicked()
{
    QString pn = ui->lineEdit_phonenum->text();
    QString ad = ui->lineEdit_address->text();
    QString uname = ui->lineEdit_user->text();
    QString gmail = ui->lineEdit_gmail->text();
    QString pass = ui->lineEdit_pass->text();
    QString confpass = ui->lineEdit_confpass->text();

    if(pn!="" && ad!="" && uname!="" && gmail!="" && pass!="")
    {
        if (pass ==confpass){
            hide();
            MainWindow *mainWindow = new MainWindow();
            mainWindow->show();
        }else {
            QMessageBox::information(this,"Incorrect Password","Password and Confirm Password didn't match. Please check it again");
        }

    }else {
        QMessageBox::information(this,"Incomplete Information","Please fill all the fields!!");
    }



}


void signup_Dialog::on_pushButton_cancel_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

