#include"Header.h"

Logger * Logger::getObj(string n)
{
	if (obj == nullptr)
		obj = new Logger(n);
	return obj;
}

void Logger::setName(string name)
{
	this->name = name;
}

void Logger::print() const
{
	cout << "Logged on: " << name << endl;
}
