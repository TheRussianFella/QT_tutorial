#ifndef RESEARCHWINDOW_H
#define RESEARCHWINDOW_H

#include <QWidget>
#include <QIcon>
#include <QPalette>
#include <QPainter>

class ResearchWindow : public QWidget
{
    Q_OBJECT

    virtual void paintEvent(QPaintEvent * event);

public:
    ResearchWindow(QWidget *parent = 0);
    ~ResearchWindow();
};

#endif // RESEARCHWINDOW_H
