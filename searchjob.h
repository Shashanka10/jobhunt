#ifndef SEARCHJOB_H
#define SEARCHJOB_H

#include <QDialog>

namespace Ui {
class searchjob;
}

class searchjob : public QDialog
{
    Q_OBJECT

public:
    explicit searchjob(QWidget *parent = nullptr);
    ~searchjob();

private slots:
    void on_pushButton_back_clicked();

private:
    Ui::searchjob *ui;
};

#endif // SEARCHJOB_H
