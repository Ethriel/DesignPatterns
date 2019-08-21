#include"Header.h"

vector<Unit*> CreatePrototype::prototypes = { new Archer(), new Mage(), new Swordsman(), new TrainingDummy() };

int main()
{
	srand(time(0));
	vector<Unit*> team1;
	vector<Unit*> team2;
	for (int i = 0;i < 10;i++)
		team1.push_back(CreatePrototype::createPlayer((WARRIORS)(rand() % 5)));
	for (int i = 0;i < team1.size();i++)
		team2.push_back(team1[i]->clone());
	LINE;
	cout << "TEAM 1\n";
	LINE;
	for (int i = 0;i < team1.size();i++)
		team1[i]->play();
	LINE;
	cout << "TEAM 2\n";
	LINE;
	for (int i = 0;i < team1.size();i++)
		team2[i]->play();

	team1.clear();
	team2.clear();

	system("pause");
}