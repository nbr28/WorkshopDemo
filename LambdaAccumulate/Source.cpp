#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <random>

using namespace std;

struct foo {
	size_t x;
	foo(size_t _x) :x{ _x } {}
	size_t operator+(foo f) { return f.x + x; }
	foo(const foo& f) { *this = f; }
	foo(const foo&& f) { *this = move(f); }
	foo& operator=(const foo& f) { 
		this->x = f.x; 
		return *this; }
	foo& operator=(const foo&& f) {
		this->x = f.x;
		return *this;
	}
};
void temp(foo i)
{
	//code
}
int main()
{
	vector<size_t> vec;
	vector<foo> foo_vec;


	//populate array
	for (size_t i = 1; i <= 10; i++)
	{
		vec.push_back(i);
		foo_vec.push_back(foo(i));	
	}

	/*unsigned long long res = std::accumulate(vec.begin(), vec.end(), 0,
		[](size_t total, size_t current) {return total + current; }		);*/
	
	unsigned long long res = std::accumulate(vec.begin(), vec.end(), 0,
		std::plus<size_t>());
	//cout << res << endl;

	/*foo res_foo = std::accumulate(foo_vec.begin(), foo_vec.end(), 0,
		std::plus<foo>());*/
	unsigned long long res_foo = std::accumulate(foo_vec.begin(), foo_vec.end(), 0,
		[](foo total, foo current) {return total.x + current.x; });


	

	//average accumtulate
	size_t num = std::count_if(foo_vec.begin(), foo_vec.end(), [](foo f) {
		return f.x > 100;
		});
	//int random = 5;
	//cout << "address of random is: " << &random << endl;
	size_t res_av = std::accumulate(foo_vec.begin(), foo_vec.end(), 0,
		[](foo a, foo b) {
			return b.x > 100 ? a.x + b.x : 0;
		}
	);

	cout << res << endl << res_av/num << endl;

	return 0;
}