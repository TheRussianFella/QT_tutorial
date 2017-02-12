#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget){

    ui->setupUi(this);
}

Widget::~Widget(){

    delete ui;
}

void Widget::getString(QString s){

    int n = s.toInt();

    emit sendInt(n);
}

void Widget::getInt(int n){

    QString s = QString::number(n);

    emit sendString(s);
}

void Widget::redefineValues(){

    int b = ui ->blueSlider ->value();
    int g = ui ->greenSlider ->value();
    int r = ui ->redSlider ->value();

    emit sendPen(QPen(QColor(r, g, b)));

}

void Widget::getWidth(int n){

    emit sendWidth(n);
}

void Widget::getReset(){
    emit sendReset();
}
