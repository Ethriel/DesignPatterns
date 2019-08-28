#pragma once
#include<iostream>
#include<string>
#include<exception>
#include<vector>
#include<map>
#include<time.h>
#define LINE cout << "_________________________\n"

using namespace std;

class Product;
__interface Buyer
{
public:
	virtual void update(Product* pr) = 0;
	virtual void setProduct(Product* pr) = 0;
};

class Product
{
public:
	Product();
	Product(string name, double price);
	~Product();
	void attach(Buyer* buyer);
	void deattach(Buyer* buyer);
	string getName() const;
	double getPrice() const;
	void notify();
	void setPrice(double price);
private:
	vector<Buyer*> buyers;
	string name;
	double price;
};


class Car : public Product
{
public:
	Car();
	Car(string name, double price);
	~Car();

private:

};

class UkrainianBuyer : public Buyer
{
public:
	UkrainianBuyer();
	UkrainianBuyer(string name);
	~UkrainianBuyer();
	void update(Product* pr) override;
	Product* getProduct();
	string getName() const;
	void setProduct(Product* pr) override;
private:
	string name;
	Product* pr;
};
