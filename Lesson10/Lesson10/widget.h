#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>
#include <QPen>

namespace Ui {
class Widget;
}

class Widget : public QWidget{

    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

signals:
    void sendInt(int n);
    void sendString(QString s);

    void sendPen(QPen pen);

    void sendWidth(int n);

    void sendReset();

public slots:
    void getInt(int n);
    void getString(QString s);

    void redefineValues();

    void getWidth(int n);

    void getReset();


private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
