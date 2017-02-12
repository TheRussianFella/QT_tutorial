#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QString>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    QString m_str;

public:
    explicit Dialog(QString ans, QWidget *parent = 0);

    QString getString() {return m_str; }
    ~Dialog();

private:
    Ui::Dialog *ui;

public slots:

    void recieveText();

};

#endif // DIALOG_H
