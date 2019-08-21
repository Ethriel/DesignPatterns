#pragma once
#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;

class Singleton
{
public:
	~Singleton();
	static Singleton* getObj(int value = 4100);
	int getValue() const;
	void setValue(int value);
private:
	Singleton(int v) :value(v) {}
	int value;
	static Singleton* obj;
};

class Logger
{
public:
	~Logger() {}
	static Logger* getObj(string n = "User");
	void setName(string name);
	void print() const;
private:
	Logger(string name) :name(name) {}
	static Logger* obj;
	string name;
};

class Toy abstract
{
public:
	Toy():name("NONE") {}
	Toy(string name) : name(name) {}
	~Toy() {}
	void printName() const;

protected:
	string name;
};

class Bear: public Toy
{
public:
	Bear():Toy("BEAR") {}
	Bear(string name):Toy(name) {}
	~Bear() {}

private:

};

class Cat: public Toy
{
public:
	Cat() :Toy("CAT") {}
	Cat(string name):Toy(name) {}
	~Cat() {}

private:

};

__interface ToyFactory
{
public:
	virtual Bear* createBear() = 0;
	virtual Cat* createCat() = 0;
};

class WoodenToys: public ToyFactory
{
public:
	WoodenToys() {}
	~WoodenToys() {}
	Bear* createBear() override;
	Cat* createCat() override;
private:

};

class TeddyToys: public ToyFactory
{
public:
	TeddyToys() {}
	~TeddyToys() {}
	Bear* createBear() override;
	Cat* createCat() override;
private:

};

class WoodenCat: public Cat
{
public:
	WoodenCat(): Cat("Wooden cat") {}
	WoodenCat(string name) :Cat(name) {}
	~WoodenCat() {}

private:

};

class TeddyCat: public Cat
{
public:
	TeddyCat():Cat("Teddy Cat") {}
	TeddyCat(string name): Cat(name) {}
	~TeddyCat() {}

private:

};

class WoodenBear: public Bear
{
public:
	WoodenBear(): Bear("Wooden bear") {}
	WoodenBear(string name):Bear(name) {}
	~WoodenBear() {}

private:

};

class TeddyBear: public Bear
{
public:
	TeddyBear(): Bear("Teddy bear") {}
	TeddyBear(string name) :Bear(name) {}
	~TeddyBear() {}

private:

};

void useToys(ToyFactory* tf);