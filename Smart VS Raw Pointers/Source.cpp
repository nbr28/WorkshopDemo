// C++ program to illustrate the use of unique_ptr 
#include<iostream> 
#include<memory> 
using namespace std;

class A
{
public:
	A(){}
	A(int i) {}
	~A() { cout << "This Object is Dead! :(" << endl; };

	void show()
	{
		cout << "A::show()" << endl;
	}
};

void showUnique()
{
	unique_ptr<A> oldP1(new A(1));
	unique_ptr<A> p1 = std::make_unique<A>();
	p1->show();

	// returns the memory address of p1 
	cout << p1.get() << endl;

	// transfers ownership to p2 
	//unique_ptr<A> p2 = p1;
	unique_ptr<A> p2 = move(p1);
	p2->show();
	//auto dumbthing = p1.get();
	cout << p1.get() << endl;
	cout << p2.get() << endl;

	// transfers ownership to p3 
	unique_ptr<A> p3 = move(p2);
	p3->show();
	cout << p1.get() << endl;
	cout << p2.get() << endl;
	cout << p3.get() << endl;
}
shared_ptr<A> showShared()
{


	shared_ptr<A> oldsp1(new A);
	shared_ptr<A> sp1 = std::make_shared<A>();

	cout << sp1.get() << endl;
	sp1->show();

	shared_ptr<A> sp2(sp1);
	shared_ptr<A> sp3 = sp2;

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
	return sp2;
}

int main()
{
	
	showUnique();
	auto identifyer =showShared();
	identifyer->show();
	

	

	return 0;


}
