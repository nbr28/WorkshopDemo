#include "Derived.h"
#include "Base.h"
#include "iExample.h"

int main()
{

	Parent p;
	Child c;
	//Show public vs Protected


	p.p_public=5;//can access public
	//casting
	p = (Parent)c;

	//c.p_public = 6;
	c.c_public = 7;
	iExample* example = &c;
	example->foo();

	return 0;
}