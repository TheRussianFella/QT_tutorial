#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPaintEvent>

class Widget : public QWidget
{
    Q_OBJECT

    int color;

public:
    Widget(QWidget *parent = 0);
    ~Widget();

    virtual void paintEvent(QPaintEvent* event);

public slots:

    void getText(QString s);
    void getNum(int num);

signals:

    void sendNum(int n);
    void sendString(QString s);

};

#endif // WIDGET_H
