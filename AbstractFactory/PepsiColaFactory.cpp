#include"Header.h"

Bottle* PepsiColaFactory::createBottle()
{
	return new PepsiColaBottle();
}
SparklingWater* PepsiColaFactory::createSpWater()
{
	return new PepsiCola();
}

PepsiColaFactory * PepsiColaFactory::getObj()
{
	if (obj == nullptr)
		obj = new PepsiColaFactory();
	return obj;
}
