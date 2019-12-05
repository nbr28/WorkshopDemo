#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;
template<class T>
void printMe(T dataArray)
{
	for (auto i = dataArray.begin(); i != dataArray.end(); i++)
	{
		
		cout << *i << " ";
	}
	cout << endl;
}

//template<class T>
//void printMeToo(T dataArray)
//{
//	for (int i=0;i<10;i++)
//	{
//		cout << dataArray[i] << " ";
//	}
//	cout << endl;
//}
int main()
{
	vector<int> vec;
	list<int> lst;

	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i*2);
		lst.push_back(i*2);
	}

	printMe(vec);
	printMe(lst);
	//printMeToo(lst);


	int countOut = count(lst.begin(), lst.end(), 4);
	cout << countOut << endl;

	for (int& i : vec)
	{
		cout << i << endl;
	}


	//std::for_each(vec.begin(), vec.end(), [](auto i) {i++; cout << i << endl; });
	return 0;
}