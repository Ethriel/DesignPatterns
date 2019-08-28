#include"Header.h"

Product::Product():name("NONE"), price(0.0)
{
}

Product::Product(string name, double price):name(name), price(price)
{
}

Product::~Product()
{
}

void Product::attach(Buyer * buyer)
{
	buyers.push_back(buyer);
	buyers[buyers.size() - 1]->setProduct(this);
}

void Product::deattach(Buyer * buyer)
{
	bool erased = false;
	int index = 0;
	for (int i = 0;i < buyers.size();i++)
	{
		if (buyers[i] == buyer)
		{
			index = i;
			erased = true;
		}
	}
	if (erased)
		buyers.erase(buyers.begin() + index);
	else
		throw exception("no shuch buyer");
}

string Product::getName() const
{
	return this->name;
}

double Product::getPrice() const
{
	return this->price;
}

void Product::notify()
{
	for (auto elem : buyers)
		elem->update(this);
}

void Product::setPrice(double price)
{
	if (price < this->price)
	{
		this->price = price;
		this->notify();
	}
}
