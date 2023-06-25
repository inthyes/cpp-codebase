#ifndef TEST_H
#define TEST_H

#include "QtCore/qtmetamacros.h"
#include <QObject>
#include <QDebug>

class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);
    ~Test();
signals:


};

#endif // TEST_H
