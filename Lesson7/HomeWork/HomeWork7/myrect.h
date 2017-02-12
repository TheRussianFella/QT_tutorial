#pragma once

#include <QWidget>
#include <QPalette>
#include <QEvent>
#include <QDesktopWidget>
#include <QRect>
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QRectF>
#include <QColor>
#include <ctime>
#include <cstdlib>

class MyRect : public QRectF{

public:

    MyRect(qreal x, qreal y, qreal w, qreal h);

};
