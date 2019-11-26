#pragma once
#include "Base.h"
#include "iExample.h"
using namespace std;
class Child :
	public Parent, public iExample
{
private:
	int c_priatve = 0;
	
protected:
	int c_protected = 1;
public:
	int c_public = 2;
	void foo()
	{
		//can access all d_ but only public and protected b_ variables
	}
	void display()
	{
		cout << "c_public: " << this->c_public<< endl;
		this->Parent::display();
	}

	int get_p_protected() { return this->p_protected; }

};

