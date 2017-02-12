#ifndef PAIR_H
#define PAIR_H

#include <QString>


class Pair{

    QString englishWord;
    QString russianWord;

public:

    Pair(QString english, QString russian);

    Pair();

    QString getEnglish() { return englishWord; }
    QString getRussian() { return russianWord; }


};

#endif // PAIR_H
