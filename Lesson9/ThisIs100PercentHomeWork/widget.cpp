#include "widget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QRadioButton>
#include <QPalette>
#include <QStackedLayout>
#include <QPushButton>
#include <QComboBox>
#include <QLabel>
#include <QSpacerItem>
#include <QSpinBox>
#include <QLineEdit>
#include <QSlider>
#include <QValidator>

Widget::Widget(QWidget *parent)
    : QWidget(parent){

    QVBoxLayout* vl = new QVBoxLayout(this);
    QHBoxLayout* hl = new QHBoxLayout();
    QStackedLayout* sl = new QStackedLayout();

    QPushButton* button = new QPushButton("Exit", this);
    QComboBox* combobox = new QComboBox(this);
    combobox ->addItem("SpinBox");
    combobox ->addItem("Slider");
    combobox ->addItem("LineEdit");

    QLabel* label = new QLabel("Not set", this);
    label -> setFrameStyle(QFrame::Box | QFrame::Plain);
    label -> setAlignment(Qt::AlignLeft);

    QSpacerItem* spc = new QSpacerItem(0, 100);

    QSpinBox* sb = new QSpinBox(this);
    sb ->setRange(0, 100);

    QSlider* slider = new QSlider(this);
    slider ->setOrientation(Qt::Horizontal);
    slider ->setRange(0, 100);
    slider ->setTickInterval(10);
    slider ->setTickPosition(QSlider::TicksAbove);

    QLineEdit* edit = new QLineEdit(this);
    QIntValidator* inq = new QIntValidator(0, 100);
    edit -> setValidator(inq);

    vl ->addLayout(hl);

    vl -> addItem(spc);

    vl ->addWidget(button);

    hl -> addWidget(combobox, 0, Qt::AlignTop);
    hl -> addWidget(label, 0, Qt::AlignTop);
    hl -> addLayout(sl);

    sl -> addWidget(sb);
    sl -> addWidget(slider);
    sl -> addWidget(edit);


    QObject::connect(combobox, SIGNAL(activated(int)), sl, SLOT(setCurrentIndex(int)));
    QObject::connect(sb, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)), sb, SLOT(setValue(int)));
    QObject::connect(sb, SIGNAL(valueChanged(int)), label, SLOT(setNum(int)));
    QObject::connect(edit, SIGNAL(textChanged(QString)), this, SLOT(getText(QString)));
    QObject::connect(this, SIGNAL(sendNum(int)), slider, SLOT(setValue(int)));
    QObject::connect(button, SIGNAL(clicked(bool)), this, SLOT(close()));
    QObject::connect(slider, SIGNAL(valueChanged(int)), this, SLOT(getNum(int)));
    QObject::connect(this, SIGNAL(sendString(QString)), edit, SLOT(setText(QString)));

}

void Widget::getText(QString s){

    int n = s.toInt();

    emit sendNum(n);

}

void Widget::getNum(int num){

    QString s = QString::number(num);

    emit sendString(s);

}

void Widget::paintEvent(QPaintEvent *event){


}

Widget::~Widget(){};
