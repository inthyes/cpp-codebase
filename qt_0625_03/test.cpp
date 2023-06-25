#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "constructed";
}

Test::~Test()
{
    qInfo() << this << "Deconstructed";
}
