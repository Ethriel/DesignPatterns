#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<time.h>
#define LINE cout << "____________________\n"

using namespace std;

// BRIDGE
/*
class Theme
{
public:
	Theme() :color("NONE") {}
	Theme(string color) : color(color) {}
	virtual ~Theme() {}
	string getColor() const
	{
		return this->color;
	}
protected:
	string color;
};

class Webpage
{
public:
	Webpage() {}
	Webpage(Theme* theme) :theme(theme) {}
	virtual ~Webpage() { }
	virtual string getContent() const = 0;

protected:
	Theme* theme;
};

class Dark : public Theme
{
public:
	Dark(): Theme("Dark") {}
	~Dark() {}

private:

};

class Light : public Theme
{
public:
	Light() : Theme("Light") {}
	~Light() {}

private:

};

class Aqua : public Theme
{
public:
	Aqua() : Theme("Aqua") {}
	~Aqua() {}

private:

};

class Home : public Webpage
{
public:
	Home() {}
	Home(Theme* theme) : Webpage(theme) {}
	~Home() {}
	string getContent() const override
	{
		return "Home. Theme " + this->theme->getColor();
	}

private:

};

class About : public Webpage
{
public:
	About() {}
	About(Theme* theme) : Webpage(theme) {}
	~About() {}
	string getContent() const override
	{
		return "About. Theme " + this->theme->getColor();
	}

private:

};

class Career : public Webpage
{
public:
	Career() {}
	Career(Theme* theme) : Webpage(theme) {}
	~Career() {}
	string getContent() const override
	{
		return "Career. Theme " + this->theme->getColor();
	}

private:

};

void printPages(vector<Webpage*> pages);
void deletePages(vector<Webpage*>& pages);
*/

class PaintApi
{
public:
	PaintApi() :color("NONE") {}
	PaintApi(string color) : color(color) {}
	virtual ~PaintApi() {}
	string getColor() const
	{
		return this->color;
	}
protected:
	string color;
};

class Figure
{
public:
	Figure() {}
	Figure(PaintApi* brush) :brush(brush) {}
	virtual ~Figure() { }
	virtual void Draw() = 0;

protected:
	PaintApi* brush;
};

class Red : public PaintApi
{
public:
	Red() : PaintApi("red") {}
	~Red() {}

private:

};

class Blue : public PaintApi
{
public:
	Blue() : PaintApi("blue") {}
	~Blue() {}

private:

};

class Green : public PaintApi
{
public:
	Green() : PaintApi("green") {}
	~Green() {}

private:

};

class Rect : public Figure
{
public:
	Rect() {}
	Rect(PaintApi* brush) : Figure(brush) {}
	~Rect() {}
	void Draw() override
	{
		cout << "Rect was drawn with " << brush->getColor() << " brush\n";
	}

private:

};

class Circle : public Figure
{
public:
	Circle() {}
	Circle(PaintApi* brush) : Figure(brush) {}
	~Circle() {}
	void Draw() override
	{
		cout << "Circle was drawn with " << brush->getColor() << " brush\n";
	}
private:

};

class Ellipse : public Figure
{
public:
	Ellipse() {}
	Ellipse(PaintApi* brush) : Figure(brush) {}
	~Ellipse() {}
	void Draw() override
	{
		cout << "Elipse was drawn with " << brush->getColor() << " brush\n";
	}

private:

};

void printFigures(vector<Figure*> figures);
void deleteFigures(vector<Figure*>& figures);