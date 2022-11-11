#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sign_in.h"
#include "login.h"

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
    hide();
    sign_in *sign = new sign_in(this);
    sign->show();
}
void MainWindow::on_pushButton_clicked()
{
    hide();
    login *log = new login(this);
    log->show();
}
