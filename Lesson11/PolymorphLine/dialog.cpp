#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(bool sync, QPen* pen, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog), _pen{pen}, color{pen->color()},
       _sync{sync}
{
    ui->setupUi(this);

    ui ->greenSlider ->setValue(color.green());
    ui ->redSlider ->setValue(color.red());
    ui ->blueSlider ->setValue(color.blue());

    ui ->thickBox ->setValue(_pen ->width());

    ui ->comboBox ->setCurrentIndex(_sync);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::changeColor(int val){

    if(sender() ->objectName() == "redSlider")
        color.setRed(val);
    else if(sender() ->objectName() == "greenSlider")
        color.setGreen(val);
    else if(sender() ->objectName() == "blueSlider")
        color.setBlue(val);

    _pen ->setColor(color);
}

void Dialog::changeThickness(int val){

    _pen ->setWidth(val);
}

bool Dialog::syncState(){

    return ui ->comboBox ->currentIndex();
}
