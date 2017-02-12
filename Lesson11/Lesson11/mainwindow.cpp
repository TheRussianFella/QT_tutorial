#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){

    ui->setupUi(this);
    QObject::connect(ui->actionOpen, SIGNAL(triggered()), SLOT(sendText()));
}

MainWindow::~MainWindow(){

    delete ui;
}

void MainWindow::sendText(){

    QString ans = ui ->sendEdit ->text();

    diag = new Dialog(ans);

    if(diag ->exec()){

        QString str = diag->getString();
        ui ->label ->setText("Recieving line: " + str);
    }

    delete diag;
}
