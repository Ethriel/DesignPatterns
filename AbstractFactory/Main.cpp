#include"Header.h"
CocaColaFactory* CocaColaFactory::obj = nullptr;
PepsiColaFactory* PepsiColaFactory::obj = nullptr;
FantaFactory* FantaFactory::obj = nullptr;
int main()
{
	Client client;
	client.getSpWater();
	system("pause");
}