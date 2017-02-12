#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QScrollBar>
#include "dictionary.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow{

    Q_OBJECT

        Dictionary dictionary;
        int currentPos;

        QScrollBar* russianBar;
        QScrollBar* englishBar;

        QVector<Pair> gameSet;
        Pair pair;
        double rightAnswers;
        double numberOfQuestions;
        bool lessAnswers;
        double numOfQuestInUnfDict;


public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:

    Ui::MainWindow *ui;
    void displayPair(Pair& pair);
    void delLastPair();

public slots:

    void buttonPressed();
    void checkRusBar(int position);
    void checkEngBar(int position);
    void showStats();
    void startGame();
    void getAnswer();

};

#endif // MAINWINDOW_H
