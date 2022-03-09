#ifndef APPLIEDJOB_H
#define APPLIEDJOB_H

#include <QDialog>

namespace Ui {
class appliedjob;
}

class appliedjob : public QDialog
{
    Q_OBJECT

public:
    explicit appliedjob(QWidget *parent = nullptr);
    ~appliedjob();

private:
    Ui::appliedjob *ui;
};

#endif // APPLIEDJOB_H
