#pragma once
#include "Child.h"

#include <iostream>

using namespace std;

class Grandchild :public Child{
public:
	virtual void hi() { cout << " I am the grandchild" << endl; }
};