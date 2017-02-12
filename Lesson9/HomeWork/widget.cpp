#include "widget.h"
#include <QSpinBox>
#include <QPushButton>
#include <QSlider>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QValidator>

Widget::Widget(QWidget *parent)
    : QWidget(parent){

    QSpinBox* spinbox = new QSpinBox(this);
    QPushButton* button = new QPushButton("Exit", this);
    QSlider* slider = new QSlider(Qt::Horizontal,this);
    QLabel* label = new QLabel("Not set", this);
    QLineEdit* edit = new QLineEdit(this);

    //QVBoxLayout* layout = new QVBoxLayout(this);
    QHBoxLayout* layout = new QHBoxLayout(this);

    int max = 100, min = 0;

    spinbox -> setRange(min, max);
    spinbox -> setValue(50);

    slider -> setRange(min, max);
    slider -> setValue(50);
    slider -> setTickPosition(QSlider::TicksAbove);
    slider -> setTickInterval(10);

    QIntValidator* inq = new QIntValidator(min, max);
    edit -> setValidator(inq);

    label -> setFrameStyle(QFrame::Box | QFrame::Plain);
    label -> setMinimumWidth(10);
    label -> setAlignment(Qt::AlignLeft);

    layout -> setMargin(10);
    layout -> setSpacing(30);

    layout -> addWidget(spinbox);
    layout -> addWidget(button);
    layout -> addWidget(slider);
    layout -> addWidget(label);
    layout -> addWidget(edit);

    QObject::connect(spinbox, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)), spinbox, SLOT(setValue(int)));
    QObject::connect(spinbox, SIGNAL(valueChanged(int)), label, SLOT(setNum(int)));
    QObject::connect(edit, SIGNAL(textChanged(QString)), this, SLOT(mySlot(QString)));
    QObject::connect(this, SIGNAL(mySignal(int)), slider, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int), )
}

void Widget::mySlot(QString s){

    int num = s.toInt();
    emit mySignal(num);

}

Widget::~Widget(){}
