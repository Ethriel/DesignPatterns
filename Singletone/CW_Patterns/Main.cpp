#include"Header.h"

Singleton* Singleton::obj = nullptr;
Logger* Logger::obj = nullptr;

//
//int main()
//{
//	// ONLY ONE OBJECT
//	/*
//	Singleton* wallet1 = Singleton::getObj();
//	cout << wallet1->getValue() << endl;
//
//	Singleton* wallet2 = Singleton::getObj(5000);
//	cout << wallet2->getValue() << endl;
//
//	wallet1->setValue(5000);
//	cout << wallet1->getValue() << endl;
//	cout << wallet2->getValue() << endl;
//	*/
//
//	// ONLY ONE LOGGED IN USER
//	/*
//	Logger* log1 = Logger::getObj();
//	log1->print();
//	Logger* log2 = Logger::getObj("Admin");
//	log2->print();
//	log1->setName("Admin");
//	log1->print();
//	log2->print();
//	*/
//
//	// ABSTRACT FACTORY
//	WoodenToys* wt = new WoodenToys();
//	TeddyToys* tt = new TeddyToys();
//	useToys(wt);
//	useToys(tt);
//
//	system("pause");
//}
