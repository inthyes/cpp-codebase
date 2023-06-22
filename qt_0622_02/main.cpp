/*
 *what
 *scope in classes
 *
 *why
 *classes have their own scope
 *classes do not share scope (unless its a static variable)
 *
*/

#include <QCoreApplication>
#include <QDebug>
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString name = "Bryan";
    qInfo() << "My name is at :" << &name << "=" << name;
//    Animal cat(&a, "Fluffly");
//    Animal dog(&a, "Fido");
    Animal person(&a, name);

    person.sayHello("Hola");
    qInfo() << person.name;

//    cat.name = "my cat";
//    dog.name = "my dog";

//    qInfo() << cat.name;
//    qInfo() << dog.name;
    return a.exec();
}
