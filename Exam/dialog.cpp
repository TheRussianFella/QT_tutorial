#include "dialog.h"
#include "ui_dialog.h"

#include <QColor>
Dialog::Dialog(QPen* pen, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog), _pen{pen}
{
    ui->setupUi(this);

    ui ->redSlider ->setValue(_pen ->color().red());
    ui ->greenSlider ->setValue(_pen ->color().green());
    ui ->blueSlider ->setValue(_pen ->color().blue());
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::changeColor(int val){

    QColor color;

    color = _pen->color();

    if(sender() ->objectName() == "redSlider")
        color.setRed(val);
    else if(sender() ->objectName() == "greenSlider")
        color.setGreen(val);
    else
        color.setBlue(val);

    _pen ->setColor(color);
}
