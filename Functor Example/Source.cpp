#include <iostream>
using namespace std;


class A {
public:

	A(){}
	A(int _x):x(_x){}
	int x;

	bool operator()() { return x; }
};

template<typename T>
void foo(T func) {
	cout << func() << endl;
}

int main()
{
	
	A a;
	a.x = 5;
	foo(a);
	foo(A(0));
	return 0;
}