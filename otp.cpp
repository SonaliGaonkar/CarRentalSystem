#include "otp.h"
#include "ui_otp.h"
#include "mainwindow.h"

otp::otp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::otp)
{
    ui->setupUi(this);
    ui->label_3->setText(QString::number(rand()));
}

otp::~otp()
{
    delete ui;
}

void otp::on_pushButton_clicked()
{
    hide();
    MainWindow *main = new MainWindow(this);
    main->show();
}
