#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPaintEvent>
#include <QPixmap>
#include <QBrush>
#include <QPalette>
#include <QBitmap>
#include <QCursor>
#include <QIcon>
#include <QSize>
#include <QMouseEvent>
#include <QPainter>
#include <QPen>
#include <QToolTip>
#include <QKeyEvent>

class Widget : public QWidget
{
    Q_OBJECT

    int _x;
    int _y;
    bool isDrawing;
    bool isRight;

    int rX;
    int rY;

    QCursor * curs;

    virtual void paintEvent(QPaintEvent* event);

protected:

    virtual void mousePressEvent(QMouseEvent* event);
    virtual void mouseReleaseEvent(QMouseEvent* event);
    virtual void mouseMoveEvent(QMouseEvent* event);
    virtual void keyPressEvent(QKeyEvent* event);

public:
    Widget(QWidget *parent = 0);
    ~Widget();
};

#endif // WIDGET_H
