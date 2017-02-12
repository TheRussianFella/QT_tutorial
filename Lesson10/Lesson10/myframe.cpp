#include "myframe.h"
#include <QDebug>

MyFrame::MyFrame(QWidget *parent) :
    QFrame(parent), _pen{new QPen(QColor(0, 0, 0))},
    painter{new QPainter()} {}

void MyFrame::paintEvent(QPaintEvent* event)
{
    painter->begin(this);
    painter->setPen(*_pen);
    painter->drawLine(0, 0, width(), height());
    painter->end();
}

void MyFrame::getPen(QPen pen){

    _pen->setColor(pen.color());
    repaint();
}

MyFrame::~MyFrame(){

    delete _pen;
}

void MyFrame::getWidth(int n){

    _pen ->setWidth(n);
    repaint();
}

void MyFrame::getReset(){

    _pen ->setColor(QColor(0, 0, 0));
    _pen ->setWidth(1);

    repaint();
}
