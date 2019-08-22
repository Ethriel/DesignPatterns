#include"Header.h"

void LaptopShop::createLaptop(LaptopBuilder * builder)
{
	builder->setMemory();
	builder->setHDD();
	builder->setManuf();
	builder->setProc();
	builder->setMatrix();
	builder->getLaptop()->show();
}