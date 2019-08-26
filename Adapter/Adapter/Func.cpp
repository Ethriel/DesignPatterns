#include"Header.h"

// COFFEE MACHINE
/*
void DemoOldMachine()
{
	CoffeeMachine* machine = new CoffeeMachine();
	char choice;
	machine->MakeCoffee();
	cout << "Making coffee...\n";
	cout << "Add milk? (y), (n)\n";
	cin >> choice;
	switch (choice)
	{
	case 'y':
	{
		machine->AddMilk();
		break;
	}
	case 'n':
	{
		break;
	}
	default:
		cout << "Wrong\n";
		break;
	}
	machine->print();
	delete machine;
}

void DemoNewMachice()
{
	NewCoffeeMachine* machine;
	int choice;
	machine = new CoffeeAdapter();
	cout << "(1) Simple coffee\n";
	cout << "(2) Coffee with milk\n";
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		machine->MakeCoffee();
		break;
	}
	case 2:
	{
		machine->MakeCoffeeWithMilk();
		break;
	}
	default:
		cout << "Wrong\n";
		break;
	}
	delete machine;
}
*/