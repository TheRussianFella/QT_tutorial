#include "dictionary.h"

#include <QTextStream>
#include <QStringList>
#include <cstdlib>
#include <ctime>

Dictionary::Dictionary(QString fileName):
    dictionaryFile{fileName}, numOfWords{0}, currentWord{0} {

    refreshDict();

    srand(time(NULL));

}

void Dictionary::addPair(const Pair& pair){

    mainDict.push_back(pair);
    currentWord++;

}

void Dictionary::saveFile() {

    if (dictionaryFile.open(QIODevice::Append)){

        QTextStream stream(&dictionaryFile);

        for(int i = numOfWords; i < currentWord; ++i){

            stream << mainDict[i].getEnglish() << " " << mainDict[i].getRussian() << "/";
        }

        numOfWords = currentWord;

        dictionaryFile.close();

        if(stream.status() != QTextStream::Ok){

            qDebug() << "Stream error";

        }
    }
}

void Dictionary::refreshDict(){

    if (dictionaryFile.open(QIODevice::ReadOnly)){

        QTextStream stream(&dictionaryFile);
        QString futurePairs;

            futurePairs = stream.readAll();

            if((futurePairs == NULL) || (futurePairs == "")){
                dictionaryFile.close();
                return;
            }
            QStringList future = futurePairs.split('/');
            future.pop_back();                              //deleting empty pair in the end of the input

            numOfWords = future.length();

            for(QString str : future){

                QStringList list = str.split(" ");

                addPair(Pair(list[0], list[1]));
            }

        if(stream.status() != QTextStream::Ok){

            qDebug() << "Stream problem";

        }

        dictionaryFile.close();
    }

}

void Dictionary::delFile(){

    dictionaryFile.resize(0);
    mainDict.clear();

    currentWord = 0;
    numOfWords = 0;

}

void Dictionary::delLastPair(){

    if(mainDict.isEmpty())
        return;

    mainDict.pop_back();
    dictionaryFile.resize(0);
    currentWord--;

    if (dictionaryFile.open(QIODevice::ReadWrite)){

        QTextStream stream(&dictionaryFile);

        for(Pair pair : mainDict){

            stream << pair.getEnglish() << " " << pair.getRussian() << "/";

        }

        if(stream.status() != QTextStream::Ok)
            qDebug() << "Stream failure";

        dictionaryFile.close();

    }
}

bool Dictionary::isEmpty(){

    return (numOfWords == 0);
}

double Dictionary::averEng(){

    double sum = 0;

    for(Pair pair : mainDict)
        sum += pair.getEnglish().length();

    return sum / mainDict.length();
}

double Dictionary::averRus(){

    double sum = 0;

    for(Pair pair : mainDict)
        sum += pair.getRussian().length();

    return sum / mainDict.length();
}

int Dictionary::numOfLetters(){

    int sum = 0;

    for(Pair pair : mainDict)
        sum += pair.getEnglish().length() + pair.getRussian().length();

    return sum;
}

Pair& Dictionary::randomPair(){

    return mainDict[rand() % mainDict.length()];

}
