#pragma once
#include <iostream>
#include "Parrent.h"

using namespace std;
class Child :public Parent {
public:
	virtual void hi() { cout << " I am the child" << endl; }
	void foo() { cout << " I am foo" << endl; };
};