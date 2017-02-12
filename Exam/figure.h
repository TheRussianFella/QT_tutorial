#ifndef FIGURE_H
#define FIGURE_H

#include <QPoint>
#include <QPainter>

class Figure
{
    QPoint _center;

public:

    Figure(QPoint center);
    virtual ~Figure();

    virtual void drawFigure(QPainter* painter) = 0;

    QPoint getCenter(){return _center;}
};

#endif // FIGURE_H
