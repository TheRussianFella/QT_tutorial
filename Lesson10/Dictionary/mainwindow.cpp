#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QScrollBar>
#include <set>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), dictionary{"dict.txt"},
        currentPos{0}, rightAnswers{0},
            numberOfQuestions{5}, lessAnswers{false}{

    setWindowTitle(QString("Dictionary"));
    setWindowIcon(QPixmap("Icon/book.jpg"));

    ui->setupUi(this);

    if(!dictionary.isEmpty()){
        for(int i = 0; i < dictionary.length(); ++i){

            displayPair(dictionary[i]);

        }
    }


    englishBar = ui ->englishList ->verticalScrollBar();
    russianBar = ui ->russianList ->verticalScrollBar();

    QObject::connect(englishBar, SIGNAL(valueChanged(int)), this, SLOT(checkRusBar(int)));
    QObject::connect(russianBar, SIGNAL(valueChanged(int)), this, SLOT(checkEngBar(int)));

    showStats();

    ui ->englishField ->setEnabled(false);
    ui ->russianField ->setEnabled(false);
    ui ->nextButton ->setEnabled(false);

}

MainWindow::~MainWindow(){

    delete ui;
}

void MainWindow::buttonPressed(){

    QString name = sender()->objectName();

    if(name == "addPair"){

        Pair pair(ui ->englishEdit ->text(), ui ->russianEdit ->text());

        dictionary.addPair(pair);
        displayPair(pair);

        ui ->englishEdit ->setText("");
        ui ->russianEdit ->setText("");

    } else if(name == "removePair") {

        dictionary.delLastPair();
        delLastPair();

    } else if(name == "saveFile"){

        dictionary.saveFile();

    } else if (name == "removeFile"){

        ui ->englishList ->clear();
        ui ->russianList ->clear();
        dictionary.delFile();
    }
}

void MainWindow::displayPair(Pair& pair){

    ui ->englishList ->addItem(pair.getEnglish());
    ui ->russianList ->addItem(pair.getRussian());
}

void MainWindow::delLastPair(){

    QListWidgetItem* english = ui ->englishList ->item(dictionary.length());
    QListWidgetItem* russian = ui ->russianList ->item(dictionary.length());

    delete english;
    delete russian;

}

void MainWindow::checkEngBar(int position){

    if(position != currentPos){

        englishBar ->setValue(position);
        currentPos = position;

    }
}

void MainWindow::checkRusBar(int position){

    if(position != currentPos){

        russianBar ->setValue(position);
        currentPos = position;

    }
}

void MainWindow::showStats(){

    QListWidget* list = ui ->statsList;

    list ->clear();

    QString ans = "Average length of russian word: " + QString::number(dictionary.averRus()) + "\n";
    list ->addItem(ans);
    ans = "Average length of english word: " + QString::number(dictionary.averEng()) + "\n";
    list ->addItem(ans);
    ans = "Number of pairs: " + QString::number(dictionary.length()) + "\n";
    list ->addItem(ans);
    ans = "Number of letters in all of words: " + QString::number(dictionary.numOfLetters());
    list ->addItem(ans);

}

void MainWindow::startGame(){

    if(!gameSet.empty())
        gameSet.clear();

    if(dictionary.length() == 0){

        ui ->results ->setText("Sorry, but dictionary is empty ");
        return;

    }
    rightAnswers = 0;

    ui ->results ->setText("Right answers: ");
    ui ->russianField ->setEnabled(true);
    ui ->nextButton ->setEnabled(true);

    if(dictionary.length() <= numberOfQuestions){

        lessAnswers = true;
        numOfQuestInUnfDict = dictionary.length();
        for(int i = 0; i < dictionary.length(); ++i)
            gameSet.push_back(dictionary[i]);

        pair = gameSet.last();
        gameSet.pop_back();
        ui ->englishField ->setText(pair.getEnglish());

        return;
    }
    while(gameSet.length() < numberOfQuestions){

        Pair pair = dictionary.randomPair();
        if(/*!gameSet.contains(pair)*/1)
            gameSet.push_back(pair);

    }

    pair = gameSet.last();
    gameSet.pop_back();
    ui ->englishField ->setText(pair.getEnglish());

}

void MainWindow::getAnswer(){

    QString russianTry = ui ->russianField ->text();
    ui ->russianField ->setText("");


        if(russianTry == pair.getRussian())
            rightAnswers++;

    if(gameSet.isEmpty()){

        ui ->russianField ->setEnabled(false);
        ui ->nextButton ->setEnabled(false);

        QString ans;

        if(!lessAnswers)
            ans = "Right answers: " + QString::number(rightAnswers / numberOfQuestions * 100) + "%";
        else
            ans = "Right answers: " + QString::number(rightAnswers / numOfQuestInUnfDict * 100) + "%";

        ui ->results ->setText(ans);

        return;
    }

    pair = gameSet.last();
    gameSet.pop_back();
    ui ->englishField ->setText(pair.getEnglish());

}
