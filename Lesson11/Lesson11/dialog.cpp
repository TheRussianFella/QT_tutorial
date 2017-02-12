#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QString ans, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog){



    ui->setupUi(this);
    ui ->label ->setText("Recieving line: " + ans);
}

Dialog::~Dialog(){

    delete ui;
}

void Dialog::recieveText(){

    m_str = ui ->lineEdit ->text();

}
