#include"Header.h"

void main()
{
	Product* car1 = new Car("BMW", 15000.0);
	Product* car2 = new Car("Reno", 12000.0);
	Buyer* a = new UkrainianBuyer ("Ivan");
	Buyer* b = new UkrainianBuyer ("Alisa");
	Buyer* c = new UkrainianBuyer ("Igor");
	Buyer* d = new UkrainianBuyer ("Bohdan");

	car1->attach(a);
	car1->attach(b);
	car2->attach(c);
	car2->attach(d);

	car1->setPrice(14000.0);
	car2->setPrice(11000.0);
	LINE;
	car1->deattach(b);
	car2->deattach(d);

	car1->setPrice(13000.0);
	car2->setPrice(10000.0);
	
	system("pause");
}