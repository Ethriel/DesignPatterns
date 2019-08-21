#include"Header.h"

void Client::getSpWater()
{
	Bottle* bottle = nullptr;
	SparklingWater* spw = nullptr;
	this->isp = nullptr;
	char choice = ' ';
	bool correct = false;
	while (true)
	{
		system("cls");
		cout << "What sparkling water do you want?\n";
		cout << "c - Coca-Cola\n";
		cout << "p - Pepsi-Cola\n";
		cout << "f - Fanta\n";
		cout << "x - exit\n";
		cin >> choice;
		switch (choice)
		{
		case 'c':
		case 'C':
		{
			isp = CocaColaFactory::getObj();
			correct = true;
			break;
		}
		case 'p':
		case 'P':
		{
			isp = PepsiColaFactory::getObj();
			correct = true;
			break;
		}
		case 'f':
		case 'F':
		{
			isp = FantaFactory::getObj();
			correct = true;
			break;
		}
		case 'x':
		case 'X':
		{
			cout << "Bye!\n";
			break;
		}
		default:
		{
			cout << "Incorrect!\n";
			correct = false;
			break;
		}
		}
		if (choice == 'x' || choice == 'X')
			break;
		if (correct)
		{
			bottle = isp->createBottle();
			spw = isp->createSpWater();
			bottle->create();
			cout << "And...\n";
			spw->create();
			delete bottle;
			delete spw;
		}
		system("pause");
	}
}