#ifndef FRAME_H
#define FRAME_H

#include <QFrame>
#include <QPaintEvent>
#include <QPen>
#include <QMouseEvent>
#include <QString>
#include <QPainter>

#include "ellipse.h"
#include "rect.h"

class Frame : public QFrame
{
    Q_OBJECT

    Figure* figures[5];
    QPen* pen;

    int curr;
    int num;

    int x;
    int y;
    int _w;
    int _h;

    bool rect;

public:

    explicit Frame(QWidget *parent = 0);
    virtual ~Frame();

    virtual void paintEvent(QPaintEvent* event);
    virtual void mouseMoveEvent(QMouseEvent* event);
    virtual void mousePressEvent(QMouseEvent* event);
    virtual void mouseReleaseEvent(QMouseEvent *event);

    QPen* getPen(){return pen;}

signals:

    void sendCoordinates(QString coor);
    void ready();

public slots:

    void getInfo(int w, int h);
    void getRect(bool rec);

};

#endif // FRAME_H
