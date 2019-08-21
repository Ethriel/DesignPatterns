#include"Header.h"

Bottle* FantaFactory::createBottle()
{
	return new FantaBottle();
}
SparklingWater* FantaFactory::createSpWater()
{
	return new Fanta();
}

FantaFactory * FantaFactory::getObj()
{
	if (obj == nullptr)
		obj = new FantaFactory();
	return obj;
}
