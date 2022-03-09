#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
#include "signup_dialog.h"
#include "employer.h"
#include "signup_emp.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_signup_clicked();

    void on_pushButton_signupemp_clicked();

private:
    Ui::MainWindow *ui;
    Dialog *secdialog;
    signup_Dialog *thirddialog;
    employer *emp;
    signup_emp *siemp;

};
#endif // MAINWINDOW_H
