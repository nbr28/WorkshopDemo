//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <numeric>
//using namespace std;
//
//bool checkIfGreaterThen10(int x)
//{
//	if (x > 10)
//		return true;
//	return false;
//}
//
//int main()
//{
//
//	//vector<int> x(10,11);
//
//
//	//cout << std::count_if(x.begin(), x.end(), [](int x) {	
//	//	if (x > 10)
//	//		return true;
//	//	return false; 
//	//	}) << endl;
//
//
//	//int sum=0;
//	//int count=0;
//	//for_each(x.begin(), x.end(), [&](int num) {
//
//	//	if (!num > 10)
//	//	{
//	//		sum += num;
//	//		count++;
//	//	}
//
//	//	});
//
//	//sort(x.begin(), x.end());
//	//auto out=accumulate(x.begin(),
//	//	find(x.begin(), x.end(), [](int num) {return num > 10 ? true : false; }),
//	//	[](double sum, int in) {
//	//		return std::move((sum + in) / 2); });
//
//	////cout<<<< endl;
//
//	//cout << "Hello World" << endl;
//	//return 0;
//}


#include <iostream>
#include <thread>
#include <vector>

using namespace std;
const int NT = 10;

void threadTask()
{
	1 + 1;
}

thread test()
{
	thread x(threadTask);


	return x;
}

int main() {
	// create a vector of not-joinable threads
	std::vector<std::thread> threads;

	// launch the execution of each thread
	for (int i = 0; i < NT; i++)
		threads.push_back(std::thread([=]() {
		std::cout << i << " Thread id = " <<
			std::this_thread::get_id() << std::endl;
			}));

	// synchronize their execution here
	for (auto& thread : threads)
		thread.join();
}