#ifndef MYFRAME_H
#define MYFRAME_H

#include <QFrame>
#include <QPaintEvent>
#include <QPen>
#include <QPainter>
#include <QColor>

class MyFrame : public QFrame
{
    Q_OBJECT

    QPen* _pen;
    QPen m_pen;
    QPainter* painter;

public:
    explicit MyFrame(QWidget *parent = 0);
    virtual ~MyFrame();

    virtual void paintEvent(QPaintEvent* event);

signals:

public slots:

    void getPen(QPen pen);

    void getWidth(int n);

    void getReset();

};

#endif // MYFRAME_H
