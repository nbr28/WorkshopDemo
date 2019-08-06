#pragma once
#include "Base.h"
#include "iExample.h"
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

	int get_p_protected() { return this->p_protected; }

};

