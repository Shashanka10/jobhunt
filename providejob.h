#ifndef PROVIDEJOB_H
#define PROVIDEJOB_H

#include <QDialog>

namespace Ui {
class providejob;
}

class providejob : public QDialog
{
    Q_OBJECT

public:
    explicit providejob(QWidget *parent = nullptr);
    ~providejob();

private:
    Ui::providejob *ui;
};

#endif // PROVIDEJOB_H
