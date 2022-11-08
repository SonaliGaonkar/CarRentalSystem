#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "sign_in.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Sonali Gaonkar/Desktop/Qt/CarRentalSystem/background.jpg");
    ui->label->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_2_clicked()
{
    sign = new sign_in(this);
    sign->show();
}


void MainWindow::on_pushButton_clicked()
{
    log = new login(this);
    log->show();
}

