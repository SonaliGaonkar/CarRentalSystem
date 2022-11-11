#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include "bookcar.h"
#include "mainwindow.h"

login::login(QWidget *parent) : QDialog(parent),
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

void login::on_loginButton_clicked()
{
    QString username, password;
    username = ui->lineEdit->text();
    password = ui->lineEdit_2->text();
    if (ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty())
    {
        QMessageBox::critical(this, tr("Login"), tr(" Enter data in all fields "));
    }

    else
    {

        if (!connOpen())
        {
            qDebug() << "Failed to open database.";
            return;
        }
        connOpen();
        QSqlQuery qry;
        qry.prepare("select * from data where username='" + username + "'and password ='" + password + "'");
        if (qry.exec())
        {
            int count = 0;
            while (qry.next())
            {
                count++;
            }
            if (count == 1)
            {

                QMessageBox::information(this, tr("Login"), tr(" Login Successful!!! "));
                hide();
                bookcar *book = new bookcar(this);
                book->show();
            }
            else
            {
                QMessageBox::critical(this, tr("Login"), tr("Enter valid data "));
                connClose();
            }
        }
    }
}

void login::on_backButton_clicked()
{
    hide();
    MainWindow *main = new MainWindow(this);
    main->show();
}
