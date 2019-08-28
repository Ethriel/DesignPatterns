#include"Header.h"

int main()
{
	// PROXY
	Door* door = new Door();
	SecureProxy* sp = new SecureProxy(door);

	sp->close();
	sp->open("admin", "123");
	sp->close();
	sp->open("qwe", "456");

	system("pause");
}