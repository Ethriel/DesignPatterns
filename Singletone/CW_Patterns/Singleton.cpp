#include"Header.h"

Singleton::~Singleton()
{
}

Singleton * Singleton::getObj(int value)
{
	if (obj == nullptr)
		obj = new Singleton(value);
	return obj;
}

int Singleton::getValue() const
{
	return this->value;
}

void Singleton::setValue(int value)
{
	this->value = value;
}
