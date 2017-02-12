#include "pair.h"

Pair::Pair(QString english, QString russian):
    englishWord{english}, russianWord{russian}{}

Pair::Pair():englishWord{"_"}, russianWord{"_"}{}
