#include "rect.h"

#include <QDebug>

Rect::Rect(QPoint center, int w, int h): Figure(center){

    qDebug() << "rect";
    if(w < 0)
        w = 10;
    if(h < 0)
        h = 10;

    _w = w;
    _h = h;

}

Rect::~Rect()
{

}

void Rect::drawFigure(QPainter *painter){

    qDebug() << "s";
    painter ->drawRect(getCenter().x(), getCenter().y(), _w, _h);

}
