#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

#include "dialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{

    Dialog* dialog;

    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public slots:

    void startDialog();
    void getCoordinates(QString coor);
    void sendInfo();

    void rectSet();

signals:

    void sendItems(int w, int h);
    void sendRect(bool rect);

};

#endif // MAINWINDOW_H
