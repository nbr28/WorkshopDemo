// Future - Promise
// future_promise.cpp

#include <iostream>
#include <thread>
#include <future>

void task(std::future<double>& f) {
	//wait ten minutes
	double x = f.get();
	std::cout << "Value = " << x << std::endl;
}

int main() {
	std::promise<double> p;
	std::future<double> f = p.get_future();
	std::thread t(task, std::ref(f));
	p.set_value(12.34);
	t.join();
}