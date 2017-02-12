#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QSize>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), pen{new QPen()},
    ui(new Ui::MainWindow), curr{0}, num{0},
        done{false}, sync{false},
            _move{20}, active{false}{

    srand(time(NULL));

    ui->setupUi(this);

    _drawDots = ui ->actionDraw_point;
    _drawLine = ui ->actionDraw_polyline;
    _drawPolygon = ui ->actionDraw_polygon;

    QObject::connect(_drawLine, SIGNAL(triggered()), SLOT(repaintReq()));
    QObject::connect(_drawPolygon, SIGNAL(triggered()), SLOT(repaintReq()));
    QObject::connect(ui ->actionClear, SIGNAL(triggered()), SLOT(clear()));
    QObject::connect(ui ->actionSettings, SIGNAL(triggered(bool)), SLOT(startDialog()));
    QObject::connect(ui ->actionMove_figure, SIGNAL(triggered(bool)), SLOT(movePoints()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pen;
}

void MainWindow::paintEvent(QPaintEvent *){

    QPainter painter(this);
    painter.setPen(*pen);

    for(int i = 0; i < num; ++i){
        if((!points[i].x() == 0) && (!points[i].y() == 0))
            painter.drawEllipse(points[i], 10, 10);
    }

    if(_drawLine ->isChecked())
        painter.drawPolyline(points, num);

    if(_drawPolygon ->isChecked())
        painter.drawPolygon(points, num);
}

void MainWindow::mousePressEvent(QMouseEvent* event){

    if(_drawDots ->isChecked()){

        QPoint point = event ->pos();

        if(curr >= 4){
            curr = 0;
            done = true;
        }

        if(!done)
            num++;

        points[curr++] = point;

        repaint();
    }
}

void MainWindow::repaintReq(){

    QAction* dismissed;

        if(sender() == _drawLine)
            dismissed = _drawPolygon;
        else
            dismissed = _drawLine;


    if((_drawLine->isChecked()) && (_drawPolygon->isChecked()))
        dismissed->setChecked(false);

    repaint();
}

void MainWindow::clear(){

    ui ->actionClear ->setChecked(false);
    if(ui ->actionMove_figure ->isChecked())
        ui ->actionMove_figure ->trigger();

    for(int i = 0; i < num; ++i )
        points[i] = QPoint(NULL, NULL);

    done = false;

    num = 0;
    curr = 0;

    repaint();
}

void MainWindow::startDialog(){

    ui ->actionSettings ->setChecked(false);

    dialog = new Dialog(sync, pen);

    if(dialog ->exec()){

        sync = dialog ->syncState();
    }

    delete dialog;
}

int MainWindow::genDir(){

    return rand() % 4;
}

void MainWindow::movePoint(QPoint* point, direction dir){

    int move = _move;
    int xMove = 0, yMove = 0;

    switch(dir){

    case down: if(height() - point->y() < move + 5) yMove = height() - point->y() - 10; else yMove = move; break;
    case up: if(point->y() - move < 65) yMove -= point -> y() - 65; else yMove -= move; break;
    case left: if(point->x() - move < 10) xMove -= point -> x() - 10; else xMove -= move; break;
    case right: if(width() - point->x() < move + 5) xMove = width() - point->x() - 10; else xMove = move; break;
    default: break;
    }

    point->setX(point->x() + xMove);
    point->setY(point->y() + yMove);


}

void MainWindow::movePoints(){

    if(!active){

        int interval = 100;

        timerID = QObject::startTimer(interval);
        active = true;

        ui ->statusBar ->showMessage("Moving points");

    } else {

        QObject::killTimer(timerID);
        active = false;

        ui ->statusBar ->showMessage("");

    }

}

void MainWindow::timerEvent(QTimerEvent *event){

    dir = static_cast<direction>(genDir());

    if(sync){

        for(int i = 0; i < num; ++i)
            movePoint(&points[i], dir);

    } else {

        for(int i = 0; i < num; ++i)
            movePoint(&points[i], static_cast<direction>(genDir()));
    }

    repaint();
}
