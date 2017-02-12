#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>

class Widget : public QWidget
{
    Q_OBJECT

    QPushButton* buttons[3];
    QLineEdit* edits[3];



public:
    Widget(QWidget *parent = 0);
    ~Widget();

public slots:

    void firstSlot();
    void secondSlot();
    void thirdSlot();

};

#endif // WIDGET_H
