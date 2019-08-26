#include"Header.h"

int main()
{
	srand(time(0));

	// BRIDGE
	/*
	Theme* dark = new Dark();
	Theme* light = new Light();
	Theme* aqua = new Aqua();
	vector<Webpage*> pagesDark = { new Home(dark), new About(dark), new Career(dark) };
	vector<Webpage*> pagesLight = { new Home(light), new About(light), new Career(light) };
	vector<Webpage*> pagesAqua = { new Home(aqua), new About(aqua), new Career(aqua) };
	vector<Webpage*> pagesRandom;
	vector<Theme*> themes = { dark, light, aqua };

	for (int i = 0;i < 9;i++)
	{
		pagesRandom.push_back(new Home(themes[rand() % 3]));
		pagesRandom.push_back(new About(themes[rand() % 3]));
		pagesRandom.push_back(new Career(themes[rand() % 3]));
	}

	printPages(pagesDark);
	printPages(pagesLight);
	printPages(pagesAqua);
	printPages(pagesRandom);

	deletePages(pagesDark);
	deletePages(pagesLight);
	deletePages(pagesAqua);
	deletePages(pagesRandom);
	*/

	PaintApi* red = new Red();
	PaintApi* green = new Green();
	PaintApi* blue = new Blue();

	vector<Figure*> figuresRed = { new Rect(red), new Circle(red), new Ellipse(red) };
	vector<Figure*> figuresGreen = { new Rect(green), new Circle(green), new Ellipse(green) };
	vector<Figure*> figuresBlue = { new Rect(blue), new Circle(blue), new Ellipse(blue) };

	printFigures(figuresRed);
	printFigures(figuresGreen);
	printFigures(figuresBlue);

	deleteFigures(figuresRed);
	deleteFigures(figuresGreen);
	deleteFigures(figuresBlue);

	system("pause");
}