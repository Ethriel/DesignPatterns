#include"Header.h"

Bear * WoodenToys::createBear()
{
	return new WoodenBear();
}

Cat * WoodenToys::createCat()
{
	return new WoodenCat();
}
