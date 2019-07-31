#pragma once
class Parent
{
private:
	int p_priatve = 0;
	void foo()
	{
		//can access all b_ variables
	}
protected:
	int p_protected = 1;
public:
	int p_public = 2;

};

