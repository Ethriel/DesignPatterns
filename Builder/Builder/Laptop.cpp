#include"Header.h"


Laptop::Laptop():name("LAPTOP")
{
}

Laptop::Laptop(string name):name(name)
{
}

Laptop::~Laptop()
{
}

string Laptop::getPart(const string & key)
{
	return config[key];
}

void Laptop::setPart(string key, string value)
{
	if (!checkPart(key))
		config[key] = value;
}

void Laptop::show() const
{
	cout << name << endl;
	for (auto tmp : config)
		cout << tmp.first << " - " << tmp.second << endl;
	system("pause");
}

bool Laptop::checkPart(string key)
{
	return config.find(key) != config.end();
}
