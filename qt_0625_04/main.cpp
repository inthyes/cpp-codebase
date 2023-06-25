/*
    What
    QObjects can not be copied

    Why
    The memory address is the objects identity

    How
    Simple functions
 */

#include <QCoreApplication>

//copy안됨. pointer || address 활용할 것!
void testPointer(QObject *obj)
{
    qInfo() << obj;
}
void testAddress(QObject &obj)
{
    qInfo() << &obj;
}
void testCopy(QObject obj)
{
    qInfo() << &obj;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QObject person;
    person.setObjectName("hyesoo");
    testPointer(&person);
    testAddress(person);
//    testCopy(person);
    return a.exec();
}
