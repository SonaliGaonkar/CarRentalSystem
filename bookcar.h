#ifndef BOOKCAR_H
#define BOOKCAR_H

#include <QDialog>

namespace Ui {
class bookcar;
}

class bookcar : public QDialog
{
    Q_OBJECT

public:
    explicit bookcar(QWidget *parent = nullptr);
    ~bookcar();

private:
    Ui::bookcar *ui;
};

#endif // BOOKCAR_H
