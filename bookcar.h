#ifndef BOOKCAR_H
#define BOOKCAR_H
#include "otp.h"
#include <QDialog>

namespace Ui {
class bookcar;
}

class bookcar : public QDialog
{
    Q_OBJECT

public:
    explicit bookcar(QWidget *parent = nullptr);
    ~bookcar();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::bookcar *ui;
    otp *ot;
};

#endif // BOOKCAR_H
