#include <iostream>
#include "Child.h"
#include "Parrent.h"
using namespace std;

int main()
{

	Parent parent;
	Child child;

	//normal calls
	parent.hi();
	child.hi();

	cout <<"--------" <<endl;
	Parent* p_Pointer;
	//Assign to pointer 
	p_Pointer = &parent;
	p_Pointer->hi();//parrent

	Child child2;
	p_Pointer = &child2;
	p_Pointer->hi();//child



	//GrandChild grandchild;

	//Child* p_child = &grandchild;
	//p_child->hi();//grandchild

	return 0;
}




