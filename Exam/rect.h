#ifndef RECT_H
#define RECT_H

#include "figure.h"

class Rect : public Figure
{

    int _w;
    int _h;

public:

    Rect(QPoint center, int w, int h);
    virtual ~Rect();

    virtual void drawFigure(QPainter* painter);
};

#endif // RECT_H
