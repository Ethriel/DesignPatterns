#include"Header.h"

Bottle* CocaColaFactory::createBottle()
{
	return new CocaColaBottle();
}
SparklingWater* CocaColaFactory::createSpWater()
{
	return new CocaCola();
}

CocaColaFactory * CocaColaFactory::getObj()
{
	if (obj == nullptr)
		obj = new CocaColaFactory();
	return obj;
}
