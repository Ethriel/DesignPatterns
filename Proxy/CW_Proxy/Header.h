#pragma once
#include<iostream>
#include<string>
#include<map>
#include<fstream>

using namespace std;

// PROXY

enum Status
{
	CLOSED = 0,
	OPENED
};

__interface iDoor
{
public:
	virtual void open() = 0;
	virtual void close() = 0;
	
};

class Door : public iDoor
{
public:
	Door() { state = CLOSED; }
	~Door() {}
	void open() override { state = OPENED; showStatus(); }
	void close() override { state = CLOSED; showStatus(); }
	void showStatus()
	{
		cout << "Door is " << (state == CLOSED ? "closed" : "opened") << endl;
	}
	bool getStatus() { return state; }
private:
	bool state;
};

typedef string LOGIN;
typedef string PASSWORD;

class SecureProxy
{
public:
	SecureProxy() = default;
	SecureProxy(Door* door);
	~SecureProxy() { delete door; }
	bool getAuthorisation(LOGIN login, PASSWORD pass);
	void open(LOGIN login, PASSWORD pass);
	void close();
	void showStatus();

private:
	Door* door;
	map<LOGIN, PASSWORD> users;
};