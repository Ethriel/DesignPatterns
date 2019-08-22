#include"Header.h"

int main()
{
	LaptopShop* shop = new LaptopShop();
	LaptopBuilder* laptopB = nullptr;
	int ch = 0;
	while (true)
	{
		system("cls");
		cout << "Enter laptop type:\n";
		cin >> ch;
		switch ((LAPTOP)ch)
		{
		case gamer:
			laptopB = new GameLaptop();
			break;
		case office:
			laptopB = new OfficeLaptop();
			break;
		case custom:
			laptopB = new CustomLaptop();
			break;
		default:
			break;
		}
		shop->createLaptop(laptopB);
		delete laptopB;
	}

	system("pause");
}