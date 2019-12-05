#pragma once

#include <iostream>
#include "iTalk.h"
using namespace std;

class Father : public iTalk {
public:
	virtual void iSay() override
	{
		cout << "I love my children" << endl;
	}
	virtual bool IamCool()
	{
		return true;
	}
};