#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPen>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

    QPen* _pen;

public:
    explicit Dialog(QPen* pen, QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;

public slots:

    void changeColor(int val);
};

#endif // DIALOG_H
