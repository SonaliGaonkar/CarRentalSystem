#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    QSqlDatabase mydb;
    void connClose(){
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen(){
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/Sonali Gaonkar/Desktop/Qt/CarRentalSystem/databases.db");
    if(!mydb.open()){
        qDebug()<<("Failed to open database");
    return false;
    }
    else{
        qDebug()<<("connected.....");
        return true;
    }
}

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:

    void on_loginButton_clicked();

    void on_backButton_clicked();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
