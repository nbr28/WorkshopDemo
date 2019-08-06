#include <iostream>
#include "Child.h"
#include "Parrent.h"
#include "Grandchild.h"

using namespace std;

int main()
{

	Parent parent;
	Child child;
	Grandchild grandchild;


	//normal calls
	parent.hi();
	child.hi();
	grandchild.hi();

	cout << "--------" << endl;

	parent = (Parent)child;
	parent.hi();

	cout << "--------" << endl;
	Parent* p_Pointer;
	//Assign to pointer 
	p_Pointer = new Parent();
	p_Pointer->hi();//parent

	Child child2;
	p_Pointer = &child2;
	p_Pointer->hi();//child

	Grandchild grandchild2;
	p_Pointer = &grandchild2;
	p_Pointer->hi();

	Parent* arr[] = { &child, &grandchild, &parent };
	Parent arr2[]= { child, grandchild, parent };
	for (int i = 0; i < 3; i++)
	{
		cout << "Array Output: " << endl;
		arr[i]->hi();
		arr2[i].hi();
	}


	//dynamic casting
	////dynamic casting
	//Parent* ppointer = &child2;
	////Child* cpointer = dynamic_cast<Child*>(&parent);
	//ppointer->hi();
	//cpointer->hi();


	//GrandChild grandchild;

	//Child* p_child = &grandchild;
	//p_child->hi();//grandchild

	return 0;
}




