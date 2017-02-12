#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPoint>
#include <QPaintEvent>
#include <QMouseEvent>
#include <QPainter>
#include <QAction>
#include <QTimerEvent>
#include <cstdlib>
#include <ctime>
#include "dialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


    Ui::MainWindow *ui;

    enum direction{up, down, left, right};
    void movePoint(QPoint* point, direction dir);
    int genDir();


    QPoint points[4];

    QAction* _drawDots;
    QAction* _drawLine;
    QAction* _drawPolygon;

    Dialog* dialog;
    QPen* pen;

    int curr;
    int num;
    int _move;
    int timerID;
    direction dir;

    bool done;
    bool sync;
    bool active;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:

    virtual void paintEvent(QPaintEvent *);
    virtual void mousePressEvent(QMouseEvent* event);
    virtual void timerEvent(QTimerEvent* event);

signals:

public slots:

    void repaintReq();
    void clear();
    void startDialog();
    void movePoints();

};

#endif // MAINWINDOW_H
