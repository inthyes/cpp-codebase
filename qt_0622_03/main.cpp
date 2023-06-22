/*
 * what
 * global scope
 *
 * why
 * some people just want to watch the world burn
*/

#include <QCoreApplication>
#include <QDebug>

QString name = "Bryan";

void testing(){
    qInfo() << name;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    name = "bob";
    qInfo() << name;

    bool test = true;
    if(test){
        QString name = "Tammy";
        qInfo() << name;
        qInfo() << ::name;
    }
    qInfo() << name;
    testing();
    return a.exec();
}
