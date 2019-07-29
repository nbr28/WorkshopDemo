// C++ program to illustrate the use of unique_ptr 
#include<iostream> 
#include<memory> 
using namespace std;

class A
{
public:
	void show()
	{
		cout << "A::show()" << endl;
	}
};

int main()
{
	unique_ptr<A> p1(new A);
	p1->show();

	// returns the memory address of p1 
	cout << p1.get() << endl;

	// transfers ownership to p2 
	unique_ptr<A> p2 = move(p1);
	p2->show();
	cout << p1.get() << endl;
	cout << p2.get() << endl;

	// transfers ownership to p3 
	unique_ptr<A> p3 = move(p2);
	p3->show();
	cout << p1.get() << endl;
	cout << p2.get() << endl;
	cout << p3.get() << endl;


	shared_ptr<A> sp1(new A);
	cout << sp1.get() << endl;
	sp1->show();

	shared_ptr<A> sp2(sp1);
	sp2->show();
	cout << sp1.get() << endl;
	cout << sp2.get() << endl;

	// Returns the number of shared_ptr objects 
	//referring to the same managed object. 
	cout << sp1.use_count() << endl;
	cout << sp2.use_count() << endl;

	// Relinquishes ownership of sp1 on the object 
	//and pointer becomes NULL 
	sp1.reset();
	cout << sp1.get() << endl;
	cout << sp2.use_count() << endl;
	cout << sp2.get() << endl;

	return 0;


}
