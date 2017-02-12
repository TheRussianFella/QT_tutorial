#include "frame.h"

#include <QDebug>
#include <QPoint>



Frame::Frame(QWidget *parent) :
    QFrame(parent), pen{new QPen()},
        curr{0},num{0},
            rect{true},
                _w{10}, _h{10}
{
    for (int  i = 0 ; i< 5; ++i)
        figures[i]=0;

}

Frame::~Frame(){
    delete pen;
}

void Frame::paintEvent(QPaintEvent *event){

    QPainter painter(this);

    painter.setPen(*pen);


    for(int i = 0; i < num; ++i)
    {
       qDebug() << "paintEvent";
       figures[i] ->drawFigure(&painter);
    }

}

void Frame::mouseMoveEvent(QMouseEvent *event){

    x = event ->pos().x();
    y = event ->pos().y();

    QString string;

    if((x < 0) || (y < 0))
        string = "Out of range";
    else
        string = QString::number(x) + ";" + QString::number(y);

    emit sendCoordinates(string);
}

void Frame::mousePressEvent(QMouseEvent *event){

    x = event ->pos().x();
    y = event ->pos().y();

    QString string;

    if((x < 0) || (y < 0))
        string = "Out of range";
    else
        string = QString::number(x) + ";" + QString::number(y);

    emit sendCoordinates(string);
}

void Frame::mouseReleaseEvent(QMouseEvent *)
{

    emit ready();

    if(curr == 5)
        curr = 0;

//    if(figures[curr] != nullptr)
//        delete figures[curr];

    if(figures[curr] != 0)
        delete figures[curr];

    if(num != 5)
        ++num;

    if(rect)
        figures[curr++] = new Rect(QPoint(x, y), _w, _h);
    else
        figures[curr++] = new Ellipse(QPoint(x, y), _w, _h);

    repaint();
}

void Frame::getInfo(int w, int h){

    _w = w;
    _h = h;
}

void Frame::getRect(bool rec){

    rect = rec;
}
