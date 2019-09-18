#include <iostream>
#include "Child.h"
#include "Parrent.h"
#include "Grandchild.h"
#include "iTalk.h"
#include "Father.h"

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
	//show move or copy
	child.value = 5;//modify value to show copy or move
	parent = (Parent)child;
	parent.hi();
	parent.value = 10;
	parent.hi();
	child.Parent::hi();

	parent = (Parent)grandchild;
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
	Parent& refPer = grandchild2;
	refPer.hi();

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
	cout << "--------" << endl;
	cout << "Array Output: " << endl;
	Father father;
	iTalk* baseArray[] = { &child, &grandchild, &parent, &father };
	for (int i = 0; i < 4; i++)
	{
		baseArray[i]->iSay();
	}

	return 0;
}




