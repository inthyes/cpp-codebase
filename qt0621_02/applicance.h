#ifndef APPLICANCE_H
#define APPLICANCE_H

#include <QObject>
#include <QDebug>

#include "Freezer.h"
#include "Microwave.h"
#include "Toaster.h"

class Applicance : public QObject, public Freezer, public Toaster, public Microwave
{
    Q_OBJECT
public:
    explicit Applicance(QObject *parent = nullptr);

signals:


    // Microwave interface
public:
    bool cook();

    // Toaster interface
public:
    bool grill();

    // Freezer interface
public:
    bool freeze();

    // QObject interface

};

#endif // APPLICANCE_H
