#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>
#include <QLineEdit>

struct CheckZeroDevision{

    QString* action;
    QString* number;

public:

    CheckZeroDevision(QString* a, QString* n):action{a}, number{n} {}

    bool operator()() {

        bool ans = (*number == "0") && (*action == "/");

        return ans;
    }

};

class Widget : public QWidget
{
    Q_OBJECT

    QString first;
    QString second;
    QString action;

    QString ans;

    QLineEdit* edit;

    CheckZeroDevision zeroDev;

    bool firstIsDone;
    bool secondIsEmpty;
    bool hasAnswer;
    bool actionIsSet;

public:
    Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void getNum();
    void getAction();
    void clearMemory();

};

#endif // WIDGET_H
