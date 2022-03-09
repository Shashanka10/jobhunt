#ifndef VPROFILEEMP_H
#define VPROFILEEMP_H

#include <QDialog>

namespace Ui {
class vprofileemp;
}

class vprofileemp : public QDialog
{
    Q_OBJECT

public:
    explicit vprofileemp(QWidget *parent = nullptr);
    ~vprofileemp();

private:
    Ui::vprofileemp *ui;
};

#endif // VPROFILEEMP_H
