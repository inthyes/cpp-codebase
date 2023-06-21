#include <QCoreApplication>
#include <QDebug>
#include "agecalc.h"

void print(Agecalc &calc){
    qInfo() << calc.name() << "Human:" << calc.humanYears();
    qInfo() << calc.name() << "Dog:" << calc.dogYears();
    qInfo() << calc.name() << "Cat:" << calc.catYears();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Agecalc bryan;
    Agecalc tammy;

    bryan.setName("Bryan");
    bryan.setAge(46);
    tammy.setName("Tammy");
    tammy.setAge(20);

    print(bryan);
    print(tammy);

    return a.exec();
}
