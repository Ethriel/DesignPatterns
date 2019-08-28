#include"Header.h"

Car::Car():Product("CAR", 0.0)
{
}

Car::Car(string name, double price): Product(name, price)
{
}

Car::~Car()
{
}