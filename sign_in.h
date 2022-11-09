#ifndef SIGN_IN_H
#define SIGN_IN_H

#include <QDialog>
#include "login.h"

namespace Ui {
class sign_in;
}

class sign_in : public QDialog
{
    Q_OBJECT

public:

    explicit sign_in(QWidget *parent = nullptr);
    ~sign_in();

private slots:

       void on_pushButton_clicked();

       void on_pushButton_2_clicked();

private:
    Ui::sign_in *ui;
    login *log;
};

#endif // SIGN_IN_H
