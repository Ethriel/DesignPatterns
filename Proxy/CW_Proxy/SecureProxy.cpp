#include"Header.h"

// PROXY
SecureProxy::SecureProxy(Door* door) :door(door)
{
	ifstream in("users.db");
	string log, pass;
	if (in.is_open())
	{
		while (!in.eof())
		{
			in >> log;
			in >> pass;
			users[log] = pass;
		}
	}
	else
		cout << "Error opening file...\n";
}

bool SecureProxy::getAuthorisation(LOGIN login, PASSWORD pass)
{
	auto it = users.find(login);
	if (it != users.end())
	{
		if (it->second == pass)
			return true;
	}
	return false;
}

void SecureProxy::open(LOGIN login, PASSWORD pass)
{
	if (door->getStatus() == CLOSED)
	{
		if (getAuthorisation(login, pass))
			door->open();
		else
			cout << "Access denied!\n";
	}
	else
		cout << "Door is already opened!\n";
}

void SecureProxy::close()
{
	if (door->getStatus() == OPENED)
		door->close();
	else
		cout << "Door is already closed!\n";
}

void SecureProxy::showStatus()
{
	door->showStatus();
}