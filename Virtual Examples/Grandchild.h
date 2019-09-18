#pragma once
#include "Child.h"

#include <iostream>

using namespace std;

class Grandchild :public Child{
public:
	Grandchild():Child(){}//uses specific child constructor
	virtual void hi() { cout << " I am the grandchild" << endl; }

	// Inherited via Child
	virtual void iSay() override
	{
		cout << "Wahh I cry a lot and want money" << endl;
	}
};