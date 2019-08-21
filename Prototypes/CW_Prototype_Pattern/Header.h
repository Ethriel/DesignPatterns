#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<time.h>
#define LINE cout << "_______________\n"

using namespace std;

enum WARRIORS
{
	ARCHER = 1,
	MAGE,
	SWORDSMAN,
};

class Unit abstract
{
public:
	Unit() : name("Unit") {}
	Unit(string name) :name(name) {}
	virtual ~Unit() {}
	virtual void play() = 0;
	virtual Unit* clone() = 0;
protected:
	string name;
};

class Archer : public Unit
{
public:
	Archer() :Unit("Archer") {}
	~Archer() {}
	void play() override
	{
		cout << name << " plays\n";
	}
	Unit* clone() override
	{
		return new Archer(*this);
	}
private:

};

class Mage : public Unit
{
public:
	Mage() : Unit("Mage") {}
	~Mage() {}
	void play() override
	{
		cout << name << " plays\n";
	}
	Unit* clone() override
	{
		return new Mage(*this);
	}
private:

};

class Swordsman : public Unit
{
public:
	Swordsman() : Unit("Swordsman") {}
	~Swordsman() {}
	void play() override
	{
		cout << name << " plays\n";
	}
	Unit* clone() override
	{
		return new Swordsman(*this);
	}
private:

};

class TrainingDummy : public Unit
{
public:
	TrainingDummy() : Unit("Training Dummy") {}
	~TrainingDummy() {}
	void play() override
	{
		cout << name << " doesn\'t play :)\n";
	}
	Unit* clone() override
	{
		return new TrainingDummy(*this);
	}
private:

};

class CreatePrototype
{
public:
	CreatePrototype() {}
	~CreatePrototype() {}
	static Unit* createPlayer(WARRIORS type)
	{
		switch (type)
		{
		case ARCHER:
		case MAGE:
		case SWORDSMAN:
			return prototypes[type - 1]->clone();
			break;
		default:
			return prototypes[3]->clone();
			break;
		}
	}

private:
	static vector<Unit*> prototypes;
};