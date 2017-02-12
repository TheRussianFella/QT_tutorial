#include "widget.h"
#include <QGridLayout>


Widget::Widget(QWidget *parent)
    : QWidget(parent){

    QGridLayout* gr = new QGridLayout(this);

    for(int i = 0; i < 3; ++i){

        buttons[i] = new QPushButton("Jump", this);
        edits[i] = new QLineEdit(this);

    }

    edits[0] -> setText("Frog");

    gr -> addWidget(buttons[0], 1, 0);
    gr -> addWidget(edits[0], 0, 0);
    gr -> addWidget(buttons[1], 1, 1);
    gr -> addWidget(edits[1], 0, 1);
    gr -> addWidget(buttons[2], 1, 2);
    gr -> addWidget(edits[2], 0, 2);

    edits[1] -> setEnabled(0);
    buttons[1]->setEnabled(0);
    edits[2] -> setEnabled(0);
    buttons[2] -> setEnabled(0);

    QObject::connect(buttons[0], SIGNAL(clicked()), this, SLOT(firstSlot()));
    QObject::connect(buttons[1], SIGNAL(clicked()), this, SLOT(secondSlot()));
    QObject::connect(buttons[2], SIGNAL(clicked()), this, SLOT(thirdSlot()));
}

Widget::~Widget(){}

void Widget::firstSlot(){

    buttons[1] -> setEnabled(1);
    edits[1] -> setText("Frog");
    edits[1] -> setEnabled(1);
    buttons[0] ->setEnabled(0);
    edits[0] ->setText("");
    edits[0] ->setEnabled(0);

}

void Widget::secondSlot(){

    buttons[2] -> setEnabled(1);
    edits[2] -> setText("Frog");
    edits[2] -> setEnabled(1);
    buttons[1] ->setEnabled(0);
    edits[1] ->setText("");
    edits[1] -> setEnabled(0);
}

void Widget::thirdSlot(){

    buttons[0] -> setEnabled(1);
    edits[0] -> setText("Frog");
    edits[0] -> setEnabled(1);
    buttons[2] ->setEnabled(0);
    edits[2] ->setText("");
    edits[2] ->setEnabled(0);
}

