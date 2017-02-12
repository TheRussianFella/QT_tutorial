#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QStringList>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::startDialog(){

    dialog = new Dialog(ui ->frame ->getPen());

    if(dialog ->exec()){

    }

    delete dialog;
}

void MainWindow::getCoordinates(QString coor){

    int x, y;

    if(!(coor == "Out of range")){

        QStringList list = coor.split(";");

        ui ->xLabel ->setText( "X: " + list[0]);
        ui ->yLabel ->setText("Y: " + list[1]);
    } else {

        ui ->xLabel ->setText( "X: ");
        ui ->yLabel ->setText("Y: ");
    }

    ui ->mouseLabel ->setText("Mouse coordinates: (" + coor + ")");
}

void MainWindow::sendInfo(){

    emit sendItems(ui ->widthEdit ->text().toInt(), ui ->heightEdit ->text().toInt());
}

void MainWindow::rectSet(){

    emit sendRect(ui ->rectButton ->isChecked());
}
