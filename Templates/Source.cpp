#include <iostream>
using namespace std;

class dumb {};

template<typename T>
T add(T a, T b)
{
	//a.foo();
	return a + b;
}

template<class T,class k>
k runAdd(T a,k b,k c)
{
	return a(b,c);
}

template<class T>
T multi(T a, T b)
{
	return a * b;
}

template<class T>
class A {
	
public:
	T t;
	A() {t = 0;}
	A(T a){t = a;}
};

int main()
{

	add<int>(1.1, 3);//auto cast
	//add<>(2.2, 3);
	add<>(2, 3);
	add(3.0, 4.4);
	
	
	
	
	A<int> a;
	//A<dumb> b;
	//A(1);
	//A<int> a(1);
	int x = 5;
	//unique_ptr<int> y(&x);//operator error no copying allowed  
	//A<unique_ptr<int>>(y);
	//auto z= A<>(1);//cant guess at type

	//cout << add(1, 2) << " " <<runAdd(multi<int>,1,4)<<endl;//can auto guess type
	cout << add(1, 2) << " " << endl;//can auto guess type
	add(1.1f, 2.2f);

	return 0;
}

/******************************************************************************

							  Online C++ Compiler.
			   Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

template<class T>
void multiply(T a, T b)
{
	cout << a * b << endl;
}

template<class T>
void multiply(T* a, T* b)
{
	cout << *a * *b << endl;
}

template<>
void multiply(char a, char b)
{
	cout << "Ha Ha Ha" << endl;
}

int main()
{
	//cout<<"Hello World";
	multiply(4, 7);//int
	multiply(12.55, 13.6);//double
	multiply<int>(3, 5.5);//int
	multiply(12.4f, 3.4f);//float

	int a = 5, b = 10;
	multiply(&a, &b);//int*
	double c = 3.3, d = 5.5;
	multiply(&c, &d);//double*
	multiply('a', 'b');//char
	return 0;
}
//
//#include <iostream>
//
//using namespace std;
//
//template<class T>
//void multiply(T a, T b)
//{
//	cout << a * b << endl;
//}
//
//template<class T>
//void multiply(T* a, T* b)
//{
//	cout << *a * *b << endl;
//}
//
//template<>
//void multiply(char a, char b)
//{
//	cout << "Ha Ha Ha" << endl;
//}
//
//int main()
//{
//	//cout<<"Hello World";
//	multiply(4, 7);//int
//	multiply(12.55, 13.6);//double
//	multiply<int>(3, 5.5);//int
//	multiply(12.4f, 3.4f);//float
//
//	int a = 5, b = 10;
//	multiply(&a, &b);//int*
//	double c = 3.3, d = 5.5;
//	multiply(&c, &d);//double*
//	multiply('a', 'b');//char
//	return 0;
//}
