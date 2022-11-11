#ifndef SIGN_IN_H
#define SIGN_IN_H

#include <QDialog>

namespace Ui {
class sign_in;
}

class sign_in : public QDialog
{
    Q_OBJECT

public:

    explicit sign_in(QWidget *parent = nullptr);
    ~sign_in();

private slots:

       void on_saveButton_clicked();

       void on_backButton_clicked();

private:
    Ui::sign_in *ui;
};

#endif // SIGN_IN_H
