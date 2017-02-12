#include "ellipse.h"
#include <QDebug>
Ellipse::Ellipse(QPoint center, int w, int h): Figure(center) {

    qDebug() << "ellipse";
    if(w < 0)
        w = 10;
    if(h < 0)
        h= 10;

    _w = w;
    _h = h;
}

Ellipse::~Ellipse()
{

}

void Ellipse::drawFigure(QPainter *painter){

    painter ->drawEllipse(getCenter(), _w, _h);
}
