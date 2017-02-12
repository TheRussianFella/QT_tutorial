#include "widget.h"
#include <QGridLayout>
#include <QPushButton>



Widget::Widget(QWidget *parent)
    : QWidget(parent), firstIsDone{false},
        secondIsEmpty{true}, hasAnswer{false},
            actionIsSet{false}, zeroDev{&action, &second}{


    QGridLayout* gl = new QGridLayout(this);

    edit = new QLineEdit(this);
    edit ->setEnabled(false);
    edit ->setText("0");
    gl ->addWidget(edit, 0, 0, 1, 4);


    QPushButton* button1 = new QPushButton("7", this);
    gl ->addWidget(button1, 1, 0);
    QObject::connect(button1, SIGNAL(clicked(bool)), this, SLOT(getNum()));

    QPushButton* button2 = new QPushButton("8", this);
    gl ->addWidget(button2, 1, 1);
    QObject::connect(button2, SIGNAL(clicked(bool)), this, SLOT(getNum()));

    QPushButton* button3 = new QPushButton("9", this);
    gl ->addWidget(button3, 1, 2);
    QObject::connect(button3, SIGNAL(clicked(bool)), this, SLOT(getNum()));

    QPushButton* button4 = new QPushButton("/", this);
    gl ->addWidget(button4, 1, 3);
    QObject::connect(button4, SIGNAL(clicked(bool)), this, SLOT(getAction()));

    QPushButton* button5 = new QPushButton("4", this);
    gl ->addWidget(button5, 2, 0);
    QObject::connect(button5, SIGNAL(clicked(bool)), this, SLOT(getNum()));

    QPushButton* button6 = new QPushButton("5", this);
    gl ->addWidget(button6, 2, 1);
    QObject::connect(button6, SIGNAL(clicked(bool)), this, SLOT(getNum()));

    QPushButton* button7 = new QPushButton("6", this);
    gl ->addWidget(button7, 2, 2);
    QObject::connect(button7, SIGNAL(clicked(bool)), this, SLOT(getNum()));

    QPushButton* button8 = new QPushButton("*", this);
    gl ->addWidget(button8, 2, 3);
    QObject::connect(button8, SIGNAL(clicked(bool)), this, SLOT(getAction()));

    QPushButton* button9 = new QPushButton("1", this);
    gl ->addWidget(button9, 3, 0);
    QObject::connect(button9, SIGNAL(clicked(bool)), this, SLOT(getNum()));

    QPushButton* button10 = new QPushButton("2", this);
    gl ->addWidget(button10, 3, 1);
    QObject::connect(button10, SIGNAL(clicked(bool)), this, SLOT(getNum()));

    QPushButton* button11 = new QPushButton("3", this);
    gl ->addWidget(button11, 3, 2);
    QObject::connect(button11, SIGNAL(clicked(bool)), this, SLOT(getNum()));

    QPushButton* button12 = new QPushButton("-", this);
    gl ->addWidget(button12, 3, 3);
    QObject::connect(button12, SIGNAL(clicked(bool)), this, SLOT(getAction()));

    QPushButton* button13 = new QPushButton("0", this);
    gl ->addWidget(button13, 4, 0);
    QObject::connect(button13, SIGNAL(clicked(bool)), this, SLOT(getNum()));

    QPushButton* button14 = new QPushButton("C", this);
    gl ->addWidget(button14, 4, 1);
    QObject::connect(button14, SIGNAL(clicked(bool)), this, SLOT(clearMemory()));

    QPushButton* button15 = new QPushButton("=", this);
    gl ->addWidget(button15, 4, 2);
    QObject::connect(button15, SIGNAL(clicked(bool)), this, SLOT(getAction()));

    QPushButton* button16 = new QPushButton("+", this);
    gl ->addWidget(button16, 4, 3);
    QObject::connect(button16, SIGNAL(clicked(bool)), this, SLOT(getAction()));



}

Widget::~Widget(){}

void Widget::getNum(){

    QPushButton* pB = qobject_cast<QPushButton*> ( sender() );
    QString num = pB->text();

    if(!firstIsDone){

        if (hasAnswer) {

            first = "";
            second = "";

            firstIsDone = false;
            secondIsEmpty = true;
            hasAnswer = false;
            actionIsSet = false;

            ans = "";

        }

        first += num;

        ans += num;
        edit ->setText(ans);

    } else {

        secondIsEmpty = false;
        actionIsSet = false;

        second += num;
        ans += num;
        edit ->setText(ans);

    }

}

void Widget::getAction(){

    QPushButton* pB = qobject_cast<QPushButton*> ( sender() );
    QString calcAction = pB->text();



    if( calcAction == "=" ){

        if(secondIsEmpty){
            second = first;
            secondIsEmpty = false;
        }

        if (zeroDev()){

            edit -> setText("Error");
            first = "";
            second = "";
            action = "";

            firstIsDone = false;
            secondIsEmpty = true;
            hasAnswer = false;
            actionIsSet = false;

            ans = "";

            return;
        }

        double f = first.toDouble();
        double s = second.toDouble();

        if (action == "+")
            first = QString::number(f + s);
        else if (action == "-")
            first = QString::number(f - s);
        else if (action == "*")
            first = QString::number(f * s);
        else if (action == "/")
            first = QString::number(f / s);

        ans = first;
        hasAnswer = true;
        firstIsDone = false;
        actionIsSet = false;

        edit ->setText(ans);

    }else if(!firstIsDone){

        if(hasAnswer)
            second = "";

        firstIsDone = true;

        action = calcAction;
        ans += " " + action + " ";
        edit -> setText(ans);

        actionIsSet = true;

    } else {


        if(zeroDev()){

            edit -> setText("Error");
            first = "";
            second = "";
            action = "";

            firstIsDone = false;
            secondIsEmpty = true;
            hasAnswer = false;
            actionIsSet = false;

            ans = "";

            return;
        }

        if(hasAnswer)
            hasAnswer = false;

        if(actionIsSet){

            action = calcAction;

            ans.remove(ans.length() - 3, 3);
            ans += " " + action + " ";

            edit -> setText(ans);
            return;
        }

        double f = first.toDouble();
        double s = second.toDouble();

        if (action == "+")
            first = QString::number(f + s);
        else if (action == "-")
            first = QString::number(f - s);
        else if (action == "*")
            first = QString::number(f * s);
        else if (action == "/")
            first = QString::number(f / s);

        second = "";
        secondIsEmpty = true;

        action = calcAction;

        ans += " " + action + " ";

        edit ->setText(ans);

        actionIsSet = true;

    }
}

void Widget::clearMemory(){

    first = "";
    second = "";

    firstIsDone = false;
    secondIsEmpty = true;
    hasAnswer = false;
    actionIsSet = false;

    ans = "";
    edit ->setText("0");

}
