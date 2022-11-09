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

void login::on_pushButton_clicked()
{
     QString username,password;
     username = ui->lineEdit->text();
     password = ui->lineEdit_2->text();

     if(!connOpen()){
         qDebug()<<"Failed to open database.";
         return;
     }
     connOpen();
     QSqlQuery qry;
     qry.prepare("select * from data where Username='"+username +"'and Password ='"+password+"'");
     if(qry.exec()){
         int count;
         while(qry.next()){
             count++;
         }
         if(count ==1)
         ui->label->setText("Login successful");

         connClose();
     }
}

