/*
 * what
 * Q_OBJECT Macro
 *
 * why
 * It's the base class for (almost) everything
 *
 * How
 * QDebug
 * Class lifecycle
 * Application life cycle
 * Event loops Q_OBJECT
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
