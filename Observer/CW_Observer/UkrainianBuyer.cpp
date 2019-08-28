#include"Header.h"


UkrainianBuyer::UkrainianBuyer()
{
}

UkrainianBuyer::UkrainianBuyer(string name):name(name)
{
}

UkrainianBuyer::~UkrainianBuyer()
{
}

void UkrainianBuyer::update(Product * pr)
{
	cout << "Dear, " << this->getName() << "! For your product " << pr->getName() << " price was changed! New price = " << pr->getPrice() << " $" << endl;
}

Product * UkrainianBuyer::getProduct()
{
	if (pr != nullptr)
		return this->pr;
	else
		throw exception("can\'t get not existing product");
}

string UkrainianBuyer::getName() const
{
	if (!name.empty())
		return this->name;
	else
		throw exception("can\'t get name of not existing user");
}

void UkrainianBuyer::setProduct(Product * pr)
{
	if (pr != nullptr)
		this->pr = pr;
}
