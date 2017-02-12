#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent){

    setWindowIcon(QIcon("Images/spider1.bmp"));

    QPixmap squir("Images/mill.jpg");
    QBrush brush(squir);

    QSize s(squir.width(), squir.height());

    setWindowOpacity(0.9);

    setFixedSize(s);

    QPalette pal;
    pal.setBrush(QPalette::Window, brush);
    setPalette(pal);

    QPixmap pxm("Images/spider1.bmp");
    pxm.setMask(QBitmap("spider1.bmp"));
    curs = new QCursor(pxm);

    isDrawing = false;
    isRight = false;

}

Widget::~Widget(){

    delete curs;

}

void Widget::paintEvent(QPaintEvent* event){

    QPainter painter(this);
    painter.setPen(QPen(Qt::red, 2, Qt::SolidLine));

    if(isDrawing){

    painter.drawLine(0,0, _x, _y);
    painter.drawLine(width() / 2, 0, _x, _y);
    painter.drawLine(width(), 0, _x, _y);
    painter.drawLine(0, height() / 2, _x, _y);
    painter.drawLine(width(), height() / 2, _x, _y);
    painter.drawLine(0, height(), _x, _y);
    painter.drawLine(width() / 2, height(), _x, _y);
    painter.drawLine(width(), height(), _x, _y);

    }
}

void Widget::mousePressEvent(QMouseEvent* event){

    if(event -> button() == Qt::LeftButton){

    setCursor(*curs);


    isDrawing = true;

    _x = event->x();
    _y = event->y();

    repaint();

    } else if(event -> button() == Qt::RightButton){

        isRight = true;

        rX = event -> x();
        rY = event -> y();
    }

}

void Widget::mouseReleaseEvent(QMouseEvent* event){

    if(isRight){
        isRight = false;
    } else {

        isDrawing = false;
        unsetCursor();

        repaint();
}
}

void Widget::mouseMoveEvent(QMouseEvent* event){

    if(isDrawing){

        if((event -> x() < 0) ||
                (event -> x() > width())||
                (event -> y() < 0)||
                (event -> y() > height()) ){

            isDrawing = false;
            unsetCursor();
            repaint();
        }

        _x = event->x();
        _y = event->y();

        repaint();
    }
}

void Widget::keyPressEvent(QKeyEvent* event){

    if((event -> key() == Qt::Key_Control) && isRight){

        QString ans;

        ans += "x=" + QString::number(rX) + " y=" + QString::number(rY);

        QPoint pos;
        pos.setX(rX + this -> x() + 8);
        pos.setY(rY + this -> y() - 2);
        QToolTip::showText ( pos, ans, this);
    }
}
