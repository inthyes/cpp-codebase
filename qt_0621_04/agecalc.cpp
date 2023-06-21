#include "agecalc.h"

Agecalc::Agecalc(QObject *parent)
    : QObject{parent}
{

}

int Agecalc::age() const
{
    return m_age;
}

void Agecalc::setAge(int age)
{
    m_age = age;
}

QString Agecalc::name() const
{
    return m_name;
}

void Agecalc::setName(const QString &name)
{
    m_name = name;
}

int Agecalc::dogYears() const
{
    return m_age * 7;
}

int Agecalc::catYears() const
{
    return m_age * 9;
}

int Agecalc::humanYears() const
{
    return m_age;
}
