// Thread Class
// thread.cpp

#include <iostream>
#include <thread>
#include <vector>

//void task() {
//	std::cout << "task says Hi" << std::endl;
//}
//
//int main() {
//	{
//		// spawn a child thread
//		std::thread t1(task);
//		// spawn another child thread
//		std::thread t2(task);
//		// continue executing the main thread
//		std::cout << "main says Hi" << std::endl;
//
//		// synchronize - IMPORTANT!
//		t2.join();
//		t1.join();
//	}
//	return 0;
//
//}

const int NT = 10;

void task() {
	std::cout << "Thread id = " <<
		std::this_thread::get_id() << std::endl;
}

int main() {
	// create a vector of threads
	std::vector<std::thread> threads;

	// launch execution of each thread
	for (int i = 0; i < NT; i++)
		threads.push_back(std::thread(task));

	// synchronize their execution here
	for (auto& thread : threads)
		thread.join();
}