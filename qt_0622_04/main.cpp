/*
 *what
 *static function in classes
 *
 *why
 *we want to put a function in a class, but don't wnat to create a class
 *
 *
*/

#include <QCoreApplication>
#include <QDebug>
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    Test t;
//    t.doStuff();
//    t.doOtherStuff();
    Test::doOtherStuff();
    return a.exec();
}
