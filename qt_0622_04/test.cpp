#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "constructed";
}

void Test::doStuff()
{
    qInfo() << this << "doStuff";
    Test::doOtherStuff();
}

void Test::doOtherStuff()
{
    //"this" does no exists
//    qInfo() << this << "doOtherStuff";
    qInfo() << "doOtherStuff";

}
