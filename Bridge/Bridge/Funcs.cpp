#include"Header.h"

// BRIDGE
/*
void printPages(vector<Webpage*> pages)
{
	for (int i = 0;i < pages.size();i++)
		cout << pages[i]->getContent() << endl;
	LINE;
}

void deletePages(vector<Webpage*>& pages)
{
	for (int i = 0;i < pages.size();i++)
		delete pages[i];
}
*/


void printFigures(vector<Figure*> figures)
{
	for (int i = 0;i < figures.size();i++)
		figures[i]->Draw();
	LINE;
}

void deleteFigures(vector<Figure*>& figures)
{
	for (int i = 0;i < figures.size();i++)
		delete figures[i];
}