#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPen>
#include <QColor>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

    QPen* _pen;
    QColor color;

    bool _sync;

public:
    explicit Dialog(bool sync, QPen* pen, QWidget *parent = 0);
    ~Dialog();

    bool syncState();

private:
    Ui::Dialog *ui;

public slots:

    void changeColor(int val);
    void changeThickness(int val);
};

#endif // DIALOG_H
