#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "figure.h"

class Ellipse : public Figure
{

    int _w;
    int _h;

public:

    Ellipse(QPoint center, int w, int h);
    virtual ~Ellipse();

    virtual void drawFigure(QPainter* painter);

};

#endif // ELLIPSE_H
