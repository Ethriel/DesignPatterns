#pragma once

#include<iostream>
#include<string>
#include<vector>

using namespace std;

enum WARRIORS
{
	ARCHER = 1,
	MAGE,
	SWORDSMAN,
};

// SIMPLE
/*
class Unit abstract
{
public:
	Unit() : name("Unit") {}
	Unit(string name) :name(name) {}
	virtual ~Unit() {}
	virtual void play() = 0;
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
private:

};
*/

// CLASSIC FACTORY METHOD
/*
class Unit abstract
{
public:
	Unit() : name("Unit") {}
	Unit(string name) :name(name) {}
	virtual ~Unit() {}
	virtual void play() = 0;
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
private:

};

class FactoryMethod
{
public:
	FactoryMethod() {}
	~FactoryMethod() {}
	virtual Unit* createPlayer() = 0;
private:

};

class FM_Archer : public FactoryMethod
{
public:
	FM_Archer() {}
	~FM_Archer() {}
	Unit* createPlayer() override
	{
		return new Archer();
	}
private:

};

class FM_Mage : public FactoryMethod
{
public:
	FM_Mage() {}
	~FM_Mage() {}
	Unit* createPlayer() override
	{
		return new Mage();
	}
private:

};

class FM_Swordsman : public FactoryMethod
{
public:
	FM_Swordsman() {}
	~FM_Swordsman() {}
	Unit* createPlayer() override
	{
		return new Swordsman();
	}
private:

};

class FM_TrainingDummy : public FactoryMethod
{
public:
	FM_TrainingDummy() {}
	~FM_TrainingDummy() {}
	Unit* createPlayer() override
	{
		return new TrainingDummy();
	}
private:

};
*/

// FM WITH PARAM
/*
class Unit abstract
{
public:
	Unit() : name("Unit") {}
	Unit(string name) :name(name) {}
	virtual ~Unit() {}
	virtual void play() = 0;
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
private:

};

class FactoryMethod
{
public:
	FactoryMethod() {}
	~FactoryMethod() {}
	static Unit* createPlayer(WARRIORS type);
private:

};
*/
