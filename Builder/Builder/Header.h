#pragma once
#include<iostream>
#include<string>
#include<map>

using namespace std;

enum LAPTOP
{
	gamer = 1,
	office,
	custom
};

class Laptop
{
public:
	Laptop();
	Laptop(string name);
	~Laptop();
	string getPart(const string& key);
	void setPart(string key, string value);
	void show() const;
	bool checkPart(string key);

private:
	string name;
	map<string, string> config;

};

class LaptopBuilder abstract
{
public:
	LaptopBuilder() :laptop(nullptr) {}
	virtual ~LaptopBuilder() {}
	virtual void setMemory() = 0;
	virtual void setHDD() = 0;
	virtual void setManuf() = 0;
	virtual void setProc() = 0;
	virtual void setMatrix() = 0;
	Laptop* getLaptop() const
	{
		if (this->laptop != nullptr)
			return this->laptop;
		return nullptr;
	}
protected:
	Laptop* laptop;
};

class GameLaptop : public LaptopBuilder
{
public:
	GameLaptop() :LaptopBuilder()
	{
		this->laptop = new Laptop("Gamer laptop");
	}
	~GameLaptop() {}
	void setMemory() override
	{
		this->laptop->setPart("memory", "16 GB");
	}
	void setHDD() override
	{
		this->laptop->setPart("HDD", "1024 GB");
	}
	void setManuf() override
	{
		this->laptop->setPart("manuf", "ASUS");
	}
	void setProc() override
	{
		this->laptop->setPart("proc", "Intel Core i7");
	}
	void setMatrix() override
	{
		this->laptop->setPart("matrix", "1920x1080");
	}
private:

};

class OfficeLaptop : public LaptopBuilder
{
public:
	OfficeLaptop() :LaptopBuilder()
	{
		this->laptop = new Laptop("Office laptop");
	}
	~OfficeLaptop() {}
	void setMemory() override
	{
		this->laptop->setPart("memory", "4 GB");
	}
	void setHDD() override
	{
		this->laptop->setPart("HDD", "256 GB");
	}
	void setManuf() override
	{
		this->laptop->setPart("manuf", "Lenovo");
	}
	void setProc() override
	{
		this->laptop->setPart("proc", "Intel Core i3");
	}
	void setMatrix() override
	{
		this->laptop->setPart("matrix", "1366x768");
	}
private:

};

class CustomLaptop : public LaptopBuilder
{
public:
	CustomLaptop() :LaptopBuilder()
	{
		this->laptop = new Laptop("Custom laptop");
	}
	~CustomLaptop() {}
	void setMemory() override
	{
		char* str = new char[200];
		cout << "Enter memory size:\n";
		cin.ignore(100, '\n');
		cin.getline(str, 100);
		this->laptop->setPart("memory", str);
		delete[]str;
	}
	void setHDD() override
	{
		char* str = new char[200];
		cout << "Enter HDD size:\n";
		cin.ignore(100, '\n');
		cin.getline(str, 100);
		this->laptop->setPart("HDD", str);
		delete[]str;
	}
	void setManuf() override
	{
		char* str = new char[200];
		cout << "Enter manufacturer name:\n";
		cin.ignore(100, '\n');
		cin.getline(str, 100);
		this->laptop->setPart("manuf", str);
		delete []str;
	}
	void setProc() override
	{
		char* str = new char[200];
		cout << "Enter processor:\n";
		cin.ignore(100, '\n');
		cin.getline(str, 100);
		this->laptop->setPart("proc", str);
		delete[]str;
	}
	void setMatrix() override
	{
		char* str = new char[200];
		cout << "Enter matrix resolution:\n";
		cin.ignore(100, '\n');
		cin.getline(str, 100);
		this->laptop->setPart("matrix", str);
		delete[]str;
	}
private:
};

class LaptopShop
{
public:
	LaptopShop() {}
	~LaptopShop() {}
	void createLaptop(LaptopBuilder* builder);
private:

};