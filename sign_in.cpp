#include "sign_in.h"
#include "ui_sign_in.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "login.h"

sign_in::sign_in(QWidget *parent) : QDialog(parent),
                                    ui(new Ui::sign_in)
{
    ui->setupUi(this);
}

sign_in::~sign_in()
{
    delete ui;
}

void sign_in::on_saveButton_clicked()
{
    login conn;
    QString name, mobile_no, address, username, password;
    name = ui->lineEdit->text();
    mobile_no = ui->lineEdit_2->text();
    address = ui->lineEdit_3->text();
    username = ui->lineEdit_4->text();
    password = ui->lineEdit_5->text();
    if (ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty() || ui->lineEdit_3->text().isEmpty() || ui->lineEdit_4->text().isEmpty() || ui->lineEdit_5->text().isEmpty())
    {
        QMessageBox::critical(this, tr("Sign in"), tr(" Enter data in all fields "));
    }
    else
    {

        if (!conn.connOpen())
        {
            qDebug() << "Failed to open database.";
            return;
        }
        conn.connOpen();
        QSqlQuery qry;
        qry.prepare("insert into data (Name,MobileNo,Address,Username,Password) values ('" + name + "','" + mobile_no + "','" + address + "','" + username + "','" + password + "')");
        if (qry.exec())
        {
            QMessageBox::question(this, tr("Save"), tr("Are you sure you want to save ? "));
            conn.connClose();
            hide();
            login *log = new login(this);
            log->show();
        }
        else
        {
            QMessageBox::critical(this, tr("error::"), qry.lastError().text());
        }
    }
}
void sign_in::on_backButton_clicked()
{
    hide();
    MainWindow *main = new MainWindow(this);
    main->show();
}
