#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent){


    setWindowTitle("HomeWork");

    QPalette pal;
    pal.setColor(QPalette::Active, QPalette::Window, Qt::white);
    pal.setColor(QPalette::Inactive, QPalette::Window, Qt::gray);
    setPalette(pal);

    QDesktopWidget dw;
    QRect screen = dw.screenGeometry();

    int h = screen.height() / 2;
    int w = screen.width() / 2;
    int _w = 800, _h = 600;

    // Spawn in a quarter
    //setFixedSize(w,h);
   // move(0,0);

    // Spawn in  the center
    setGeometry( w - _w / 2, h -  _h / 2, _w, _h);

    int interval = 1000;

    int timer = startTimer(interval);

}

Widget::~Widget(){}

int Widget::genX(){

    return rand() % width();
}

int Widget::genY(){

    return rand() % height();

}

QColor Widget::genColor(){

    return QColor(rand() % 256, rand() % 256, rand() % 256);
}

int Widget::genW(QPoint p){

    return rand() % width() - p.x();

}

int Widget::genH(QPoint p){

    return rand() % height() - p.y();

}

void Widget::paintEvent(QPaintEvent* event){


    QPainter painter(this);
    QBrush brush;
    QPen pen(Qt::black, 2);

    brush.setColor(Qt::black);
    brush.setStyle(Qt::CrossPattern);

    painter.setPen(pen);
    painter.setBrush(brush);




    //////////////////////////////////////////
    // Task 2
/*
    m_margin = 40;
    m_spacer = 30;
    m_quant = 5;

    m_rectHeight = geometry().height() - m_margin*2;
    m_rectWidth = ( geometry().width() - m_margin*2 - m_spacer * (m_quant - 1)) / m_quant;
    int x = m_margin;
    int y = m_margin;

    for(int i = 0; i < m_quant; ++i){

        painter.drawRect(x, y, m_rectWidth, m_rectHeight);
        x += m_rectWidth + m_spacer;

    }
*/
    //////////////////////////////////////////
    //Task 3
    /*
    QRectF* rects[4];

    qreal x = width() / 8, y = height() / 2;

    for(int i = 0; i < 4; ++i){

        rects[i] = new MyRect(x, y, 150, 150);

        painter.drawRect( *rects[i] );
        x += 30;
        y += -20;

        delete rects[i];

    }
*/
    ///////////////////////////////////////////

    //Task 4
///*
    for(int i = 0; i < 10; ++i){

        brush.setColor(genColor());
        painter.setBrush(brush);

        QPoint p(genX(), genY());

        int mark = rand() % 3;

        switch(mark){

        case 0: painter.drawRect(p.x(), p.y(), genW(p), genH(p)); break;
        case 1: painter.drawLine(genX(), genY(), genX(), genY()); break;
        case 2: painter.drawEllipse(p.x(), p.y(), genW(p), genH(p)); break;
        default: break;

        }

    }

//*/
    /////////////////////////////////////////////
}

void Widget::timerEvent(QTimerEvent* event){

    repaint();

}
