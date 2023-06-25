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

/*
    Signals and Slots

    What
    Signals and slots

    Why
    Easy communication between QObjects

    How
    Two objects talking
*/
#include <QCoreApplication>
#include "test.h"

void notification(){
    Test mom;
    Test child;

    mom.setObjectName("mom");
    child.setObjectName("child");

    QObject::connect(&mom, &Test::alarm, &child, &Test::wake, Qt::ConnectionType::AutoConnection);

//    mom.testing();
    child.wake("Now");
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    notification();
    return a.exec();
}
