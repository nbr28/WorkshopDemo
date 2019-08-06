#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void foo(int x)
{
	cout << x << endl;
}

int main()
{


	int x=5;
	//Pass BY Value
	auto func =[=](int xxx) {
		xxx++;
		//x++;
		cout << xxx << endl;
		cout << x << endl;
	};
	/*auto func = [x](int xxx) {
		xxx++;
		x++;
		cout << xxx << endl;
		cout << x << endl;
	};
	auto func = [](int xxx) {
		xxx++;
		x++;
		cout << xxx << endl;
		cout << x << endl;
	};*/
	func(6);

	[=](int xxx) {
		xxx++;
		//x++;
		cout << xxx << endl;
		cout << x << endl;
	}(7);//interesting deref of function pointer

	void(*testName)(int) = foo;

	testName(55);

	vector<int> myVector = { 5,3,4,10,22,3456,2,1,0 };

	//cout << *myVector.begin() << endl;
	//iterators
	for (auto i = myVector.begin() + 3; 
		i != myVector.begin() + 6 ; 
		i++)
	{
		cout << *i << endl;
	}
	//(Range Start, Range End, Predicate) 
	auto found = find_if(myVector.begin(), myVector.end(), 
		[](int a)->bool {return a == 4; }
		);

	sort(myVector.begin(), myVector.end(),
		[](int a, int b)->bool {
			cout << "a:" << a << " b:" << b << endl;
			return a < b; }
	);

	cout << endl;

	for (auto i = myVector.begin() ;
		i != myVector.end();
		i++)
	{
		cout << *i << endl;
	}
	cout << "Found Value: " << *found << endl;


	return 0;
}