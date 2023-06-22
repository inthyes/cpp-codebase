/*
 * what
 * Function scope
 *
 * why
 * functions have their own scope, but share with their parent scope
 * understanding lexical scope
 * */

#include <QCoreApplication>

void test(int number){
    qInfo() << "2-Number: " << &number << "=" << number;
}

int main(int argc, char *argv[])
{   //scope
    QCoreApplication a(argc, argv);

    int number = 75;
    qInfo() << "1-Number: " << &number << "=" << number;
    test(number);


    bool ok = true;
    if (ok){
            //scope
            int number = 1000;
            qInfo() << "3-Number: " << &number << "=" << number;
    }
    qInfo() << "4-Number: " << &number << "=" << number;
    return a.exec();
}
