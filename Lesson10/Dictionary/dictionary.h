#ifndef DICTIONARY_H
#define DICTIONARY_H

#include "pair.h"
#include <QFile>
#include <QVector>
#include <QDebug>
#include <QString>

class Dictionary{

    QFile dictionaryFile;
    QVector<Pair> mainDict;

    int numOfWords;
    int currentWord;

    void refreshDict();

public:

    Dictionary(QString fileName);

    void saveFile();
    void delFile();

    void addPair(const Pair &pair);
    void delLastPair();
    bool isEmpty();

    double averEng();
    double averRus();
    int numOfLetters();

    Pair& randomPair();

    Pair& operator[](int i){ return mainDict[i];}

    int length(){ return mainDict.length(); }

};

#endif // DICTIONARY_H
