#include <iostream>
using namespace std;

template<typename T>
T add(T a, T b)
{
	//a.foo();
	return a + b;
}

//template<class T,class k>
//k runAdd(T a,k b,k c)
//{
//	return a(b,c);
//}

template<class T>
T multi(T a, T b)
{
	return a * b;
}

//template<class T=int>
//class A {
//	
//public:
//	T t;
//	A() {
//		t = 0;
//	}
//	A(T a)
//	{
//		t = a;
//	}
//
//};

int main()
{
	add<int>(1, 3);
	add<>(2, 3);
	add(3.0, 4.2);
	//A<int> a;
	int x = 5;
	//unique_ptr<int> y(&x);//operator error no copying allowed  
	//A<unique_ptr<int>>(y)
	//auto z= A<>(1);//cant guess at type

	//cout << add(1, 2) << " " <<runAdd(multi<int>,1,4)<<endl;//can auto guess type
	cout << add(1, 2) << " " << endl;//can auto guess type

	return 0;
}