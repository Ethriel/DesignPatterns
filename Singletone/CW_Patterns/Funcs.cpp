#include"Header.h"

void useToys(ToyFactory* tf)
{
	Toy* toy1 = tf->createBear();
	Toy* toy2 = tf->createCat();
	toy1->printName();
	toy2->printName();
}