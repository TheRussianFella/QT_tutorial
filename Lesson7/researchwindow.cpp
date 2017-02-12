#include "researchwindow.h"

ResearchWindow::ResearchWindow(QWidget *parent)
    : QWidget(parent){

    setFixedSize(1000,500);

    setWindowTitle("ResearchWindow");
    setWindowState(Qt::WindowNoState);

    QIcon a("Images/donkey.png");
    setWindowIcon(a);

    QPixmap squir("Images/belka.jpeg");
    QBrush brush(squir);


    QPalette pal;
    pal.setColor(QPalette::Active, QPalette::Window, Qt::white);
    pal.setBrush(QPalette::Window, brush);
    setPalette(pal);

}

ResearchWindow::~ResearchWindow(){}

void ResearchWindow::paintEvent(QPaintEvent* event){

    QPoint a(5,5), b(10,10);

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);

    QColor color(125, 10, 23);
    QPen pen(color, 2, Qt::DotLine);
    painter.setPen(pen);

    QBrush brush(QColor(234,45,56));
    painter.setBrush(brush);

    painter.drawRect(100,100,100,100);

    pen.setColor(QColor(234,34,45));
    pen.setStyle(Qt::DashDotDotLine);
    painter.setPen(pen);

    brush.setColor(QColor(34,3,4));
    painter.setBrush(brush);

    painter.drawRect(QRect(23,34,200,101));

}
