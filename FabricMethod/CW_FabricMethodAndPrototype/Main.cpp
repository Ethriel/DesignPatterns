#include"Header.h"

int main()
{
	// SIMPLE
	/*
	vector<Unit*> units;
	int ch = 0;
	while (true)
	{
		system("cls");
		cout << "(1) add archer\n";
		cout << "(2) add mage\n";
		cout << "(3) add swordsman\n";
		cout << "(4) launch play\n";
		cout << "(0) exit\n";
		cin >> ch;

		if (ch == 0)
		{
			for (int i = 0; i < units.size(); i++)
				delete units[i];
			break;
		}
		else if (ch == ARCHER)
			units.push_back(new Archer());
		else if (ch == MAGE)
			units.push_back(new Mage());
		else if (ch == SWORDSMAN)
			units.push_back(new Swordsman());
		else if (ch == 4)
		{
			for (int i = 0; i < units.size(); i++)
				units[i]->play();
			system("pause");
		}
		else
			units.push_back(new TrainingDummy());

	}
	*/

	// CLASSIC FM
	/*
	int ch = 0;
	FM_Archer fma;
	FM_Mage fmm;
	FM_Swordsman fms;
	FM_TrainingDummy fmtd;
	FactoryMethod* fm[] = { &fma, &fmm, &fms, &fmtd };
	vector<Unit*> units;
	Unit* tmp;
	while (true)
	{
		system("cls");
		cout << "(1) add archer\n";
		cout << "(2) add mage\n";
		cout << "(3) add swordsman\n";
		cout << "(0) exit\n";
		cin >> ch;
		if (ch == 0)
			break;
		switch (ch)
		{
		case ARCHER:
		case MAGE:
		case SWORDSMAN:
			tmp = fm[ch - 1]->createPlayer();
			break;
		default:
		{
			tmp = fm[3]->createPlayer();
			break;
		}
		}
		units.push_back(tmp);
	}
	if (!units.empty())
	{
		for (int i = 0;i < units.size();i++)
			units[i]->play();
		for (int i = 0;i < units.size();i++)
			delete units[i];
	}
	*/

	// FM WITH PARAM
	/*
	vector<Unit*> units;
	Unit* tmp;
	int ch = 0;

	while (true)
	{
		system("cls");
		cout << "(1) add archer\n";
		cout << "(2) add mage\n";
		cout << "(3) add swordsman\n";
		cout << "(0) exit\n";
		cin >> ch;
		if (ch == 0)
			break;
		tmp = FactoryMethod::createPlayer((WARRIORS)ch);
		units.push_back(tmp);
	}
	if (!units.empty())
	{
		for (int i = 0;i < units.size();i++)
			units[i]->play();
		for (int i = 0;i < units.size();i++)
			delete units[i];
	}
	*/

	system("pause");
}