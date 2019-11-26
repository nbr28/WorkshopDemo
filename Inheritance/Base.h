#pragma once
#include <iostream>
using namespace std;
class Parent
{
private:
	int p_priatve = 0;
	void foo()
	{
		//can access all p_ variables
	}
protected:
	int p_protected = 1;

public:
	int p_public = 2;
	void display()
	{
		cout << "p_public: " << this->p_public << endl;
	}

};

