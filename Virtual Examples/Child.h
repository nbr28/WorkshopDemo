#pragma once
#include <iostream>
#include "Parrent.h"

using namespace std;
class Child :public Parent {
public:
	//void foo() { cout << " I am foo" << endl; };

	virtual void hi() { cout << " I am the child" << endl; }
	virtual void iSay() override
	{
		cout << "I love OOP244" << endl;
	}
};