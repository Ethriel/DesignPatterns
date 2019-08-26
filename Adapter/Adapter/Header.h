#pragma once
#include<iostream>
#include<string>

using namespace std;

// ADAPTER
/*
class Coord
{
public:
	Coord():x(0), y(0) {}
	Coord(int x, int y): x(x), y(y) {}
	~Coord() {}
	void setCoords(int x, int y) { this->x = x; this->y = y; }
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	int getX() const { return x; }
	int getY() const { return y; }
private:
	int x;
	int y;
};

class Rectangle
{
public:
	Rectangle() {}
	Rectangle(int x, int y, int x2, int y2) :lt(x, y), rb(x2, y2) {}
	~Rectangle() {}
	void Draw()
	{
		cout << "Left-top point: " << "(" << lt.getX() << ", " << lt.getY() << ")" << endl;
		cout << "Right-bot point: " << "(" << rb.getX() << ", " << rb.getY() << ")" << endl;
	}
protected:
	Coord lt;
	Coord rb;
	
};

class NewRect
{
public:
	NewRect() {}
	NewRect(string color):color(color) {}
	~NewRect() {}
	virtual void Draw() = 0;

protected:
	string color;
};

class RectAdapter: public NewRect, private Rectangle
{
public:
	RectAdapter() {}
	RectAdapter(int width, int height, string color) : Rectangle(0, 0, width, height), NewRect(color)
	{ 
	}
	~RectAdapter() {}
	void Draw() override
	{
		cout << "Color: " << color << endl;
		cout << "Width: " << abs(lt.getX() - rb.getX()) << endl;
		cout << "Height: " << abs(lt.getY() - rb.getY()) << endl;
		Rectangle::Draw();
	}

private:
};
*/

// COFFEE MACHINE
/*
class CoffeeMachine
{
public:
	CoffeeMachine();
	~CoffeeMachine();
	void MakeCoffee();
	void AddMilk();
	void print();
protected:
	string coffee;
	int totalCost;
};

class NewCoffeeMachine
{
public:
	NewCoffeeMachine();
	~NewCoffeeMachine();
	virtual void MakeCoffee() = 0;
	virtual void MakeCoffeeWithMilk() = 0;
protected:

};

class CoffeeAdapter: public NewCoffeeMachine, private CoffeeMachine
{
public:
	CoffeeAdapter();
	~CoffeeAdapter();
	void MakeCoffee() override;
	void MakeCoffeeWithMilk() override;
private:

};

void DemoOldMachine();
void DemoNewMachice();
*/