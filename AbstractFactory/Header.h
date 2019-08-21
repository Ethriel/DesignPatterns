#pragma once
#include<iostream>
#include<Windows.h>
#include<string>
#include<fstream>
#include<algorithm>

using namespace std;

class SparklingWater abstract
{
public:
	SparklingWater() :name("Sparkling water") {}
	SparklingWater(string name) : name(name) {}
	~SparklingWater() {}
	void create() const
	{
		cout << "Filled with " << name << endl;
	}
protected:
	string name;
};

class CocaCola : public SparklingWater
{
public:
	CocaCola() :SparklingWater("Coca-Cola") {}
	CocaCola(string name) :SparklingWater(name) {}
	~CocaCola() {}

private:

};

class PepsiCola : public SparklingWater
{
public:
	PepsiCola() :SparklingWater("Pepsi-Cola") {}
	PepsiCola(string name) :SparklingWater(name) {}
	~PepsiCola() {}

private:

};

class Fanta : public SparklingWater
{
public:
	Fanta() :SparklingWater("Fanta") {}
	Fanta(string name) :SparklingWater(name) {}
	~Fanta() {}

private:

};

class Bottle abstract
{
public:
	Bottle() :name("Bottle") {}
	Bottle(string name): name(name) {}
	~Bottle() {}
	void create() const
	{
		cout << name << " created.\n";
	}
private:
	string name;
};

class CocaColaBottle : public Bottle
{
public:
	CocaColaBottle() : Bottle("Coca-Cola bottle") {}
	CocaColaBottle(string name): Bottle(name) {}
	~CocaColaBottle() {}

private:

};

class PepsiColaBottle : public Bottle
{
public:
	PepsiColaBottle() : Bottle("Pepsi-Cola bottle") {}
	PepsiColaBottle(string name) : Bottle(name) {}
	~PepsiColaBottle() {}

private:

};

class FantaBottle : public Bottle
{
public:
	FantaBottle() : Bottle("Fanta bottle") {}
	FantaBottle(string name) : Bottle(name) {}
	~FantaBottle() {}

private:

};

__interface iSpWaterFactory
{
public:
	virtual SparklingWater* createSpWater() = 0;
	virtual Bottle* createBottle() = 0;
};

class CocaColaFactory : public iSpWaterFactory
{
public:
	~CocaColaFactory() {}
	Bottle* createBottle() override;
	SparklingWater* createSpWater() override;
	static CocaColaFactory* getObj();
private:
	CocaColaFactory() {}
	static CocaColaFactory* obj;
};

class PepsiColaFactory : public iSpWaterFactory
{
public:
	~PepsiColaFactory() {}
	Bottle* createBottle() override;
	SparklingWater* createSpWater() override;
	static PepsiColaFactory* getObj();
private:
	PepsiColaFactory() {}
	static PepsiColaFactory* obj;
};

class FantaFactory : public iSpWaterFactory
{
public:
	~FantaFactory() {}
	Bottle* createBottle() override;
	SparklingWater* createSpWater() override;
	static FantaFactory* getObj();
private:
	FantaFactory() {}
	static FantaFactory* obj;
};


class Client
{
public:
	Client():name("Client") {}
	~Client() {}
	void getSpWater();
private:
	string name;
	iSpWaterFactory* isp;
};
