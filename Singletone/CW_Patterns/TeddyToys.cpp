#include"Header.h"

Bear * TeddyToys::createBear()
{
	return new TeddyBear();
}

Cat * TeddyToys::createCat()
{
	return new TeddyCat();
}
