#include <iostream>
using namespace std;

void foo()
{
	static int i = 0;
	i++;
	cout << "I is: " << i << endl;
}

void bar()
{
	int i = 0;
	i++;
	cout << "I is: " << i << endl;
}

int main()
{
	const char a[] = "Testing";

	const char d[] = "Testing";
	const char* b = "Testing";
	const char* c = "Testing";
	cout << (a == d )<< endl;
	cout << (c == b) << endl;
	for (int i = 0; i < 10; i++)
			bar();
	cout << "WITH STATIC" << endl;
	for (int i = 0; i < 10; i++)
		foo();
	return 0;
}