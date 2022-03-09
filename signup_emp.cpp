#include "signup_emp.h"
#include "ui_signup_emp.h"
#include "mainwindow.h"
#include <QMessageBox>

signup_emp::signup_emp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup_emp)
{
    ui->setupUi(this);
    QPixmap vec1(":/resources/image/reg.png");
    ui->label_signpic->setPixmap(vec1.scaled(200,400));



    /*place holder*/
    ui->lineEdit_phonenumemp->setPlaceholderText("Phone Number");
    ui->lineEdit_addressemp->setPlaceholderText("Address");
    ui->lineEdit_useremp->setPlaceholderText("User Name");
    ui->lineEdit_gmailemp->setPlaceholderText("Gmail");
    ui->lineEdit_passemp->setPlaceholderText("Password");
    ui->lineEdit_confpassemp->setPlaceholderText("Confirm Password");

    //icon//
    QIcon phnnum(":/resources/image/phone.png");
    ui->lineEdit_phonenumemp->addAction(phnnum,QLineEdit::LeadingPosition);
    QIcon adress(":/resources/image/address.png");
    ui->lineEdit_addressemp->addAction(adress,QLineEdit::LeadingPosition);
    QIcon use(":/resources/image/user.png");
    ui->lineEdit_useremp->addAction(use,QLineEdit::LeadingPosition);
    QIcon gma(":/resources/image/gmail.png");
    ui->lineEdit_gmailemp->addAction(gma,QLineEdit::LeadingPosition);
    QIcon pas(":/resources/image/password.jpg");
    ui->lineEdit_passemp->addAction(pas,QLineEdit::LeadingPosition);
    ui->lineEdit_confpassemp->addAction(pas,QLineEdit::LeadingPosition);


}

signup_emp::~signup_emp()
{
    delete ui;
}

void signup_emp::on_pushButton_cancelemp_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


void signup_emp::on_pushButton_signemp_clicked()
{
    QString pnemp = ui->lineEdit_phonenumemp->text();
    QString ademp = ui->lineEdit_addressemp->text();
    QString uname = ui->lineEdit_useremp->text();
    QString gmail = ui->lineEdit_gmailemp->text();
    QString passemp = ui->lineEdit_passemp->text();
    QString confpassemp = ui->lineEdit_confpassemp->text();

    if(pnemp!="" && ademp!="" && uname!="" && gmail!="" && passemp!="")
    {
        if (passemp ==confpassemp){
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

