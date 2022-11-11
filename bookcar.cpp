#include "bookcar.h"
#include "ui_bookcar.h"
#include <QMessageBox>

bookcar::bookcar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bookcar)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Sonali Gaonkar/Desktop/Qt/CarRentalSystem/carbook.jpg");
    ui->label->setPixmap(pix);
}
bookcar::~bookcar()
{
    delete ui;
}
void bookcar::on_pushButton_clicked()
{
     QMessageBox::information(this,tr("Booking"),tr(" Your car is booked Successfully!!! "));
     hide();
     ot = new otp(this);
     ot->show();
}
void bookcar::on_pushButton_2_clicked()
{
  QMessageBox::information(this,tr("Booking"),tr(" Your car is booked Successfully!!! "));
   hide();
  ot = new otp(this);
  ot->show();
}
void bookcar::on_pushButton_3_clicked()
{
     QMessageBox::information(this,tr("Booking"),tr(" Your car is booked Successfully!!! "));
      hide();
     ot = new otp(this);
     ot->show();
}
void bookcar::on_pushButton_4_clicked()
{
    QMessageBox::information(this,tr("Booking"),tr(" Your car is booked Successfully!!! "));
     hide();
    ot = new otp(this);
    ot->show();
}
