/*
 * what
 * QObject
 *
 * why
 * It's the base class for (almost) everything
 *
 * How
 * QDebug
 * Class lifecycle
 * Application life cycle
 * Event loops
*/

#include <QCoreApplication>
#include "test.h"

void lifecycle(){
    Test t;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    lifecycle();
    return a.exec();
}
