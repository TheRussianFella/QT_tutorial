#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>


class Widget : public QWidget
{
    Q_OBJECT


public:
    Widget(QWidget *parent = 0);
    ~Widget();

signals:
    void mySignal(int n);
    void mySignal(QString s);

public slots:
    void mySlot(QString s);
    void mySlot(int n);

};

#endif // WIDGET_H
