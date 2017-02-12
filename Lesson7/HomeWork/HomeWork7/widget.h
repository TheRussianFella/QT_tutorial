#pragma once

#include "myrect.h"
#include <QTimerEvent>

class Widget : public QWidget
{
    Q_OBJECT

    //rectInfo

    int m_quant;
    int m_margin;
    int m_spacer;
    int m_rectHeight;
    int m_rectWidth;

    // end of rect info

protected:
    virtual void timerEvent(QTimerEvent* event);

public:

    Widget(QWidget *parent = 0);
    ~Widget();

    int genX();
    int genY();
    int genW(QPoint p);
    int genH(QPoint p);

    QColor genColor();

    virtual void paintEvent(QPaintEvent* event);
};

