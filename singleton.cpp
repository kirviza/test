#include "singleton.h"

Singleton::Singleton(int value) : _value(value)
{}

Singleton& Singleton::Instance()
{
    static Singleton instance;
    return instance;
}

Singleton::~Singleton()
{
}

void Singleton::setValue(int value)
{
    _value = value;
}

int Singleton::getValue() const
{
    return _value;
}


