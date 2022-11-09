#include "bookcar.h"
#include "ui_bookcar.h"

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
