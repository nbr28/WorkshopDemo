#pragma once

#include <iostream>
#include "iTalk.h"
using namespace std;

class Parent: public iTalk {
public:
	//Constructor 
	Parent():value(0){
	}

	int value;
	virtual void hi() { 
		cout << " I am the parent, with value of: "<<value << endl; 
	}
	virtual void iSay() override
	{
		cout << "I hate Taxes" << endl;
	}
};