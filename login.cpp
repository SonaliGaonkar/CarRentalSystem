#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Sonali Gaonkar/Desktop/Qt/CarRentalSystem/login.png");
    ui->label_4->setPixmap(pix);
}

login::~login()
{
    delete ui;
}
