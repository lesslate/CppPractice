#include <iostream>
#include <mutex> 
#include <thread>
#include <vector>
#include <chrono>
#include <string>

using namespace std;

mutex mtx;

int sum = 0;
int counter = 0;

int main()
{

	auto work_func = []()
	{
		for (int i = 0; i < 10; i++)
		{
			
			mtx.lock();
			sum++;
			cout << std::this_thread::get_id() << " " << sum << endl;
			mtx.unlock();
		}
	};

	std::thread t1 = std::thread(work_func);
	std::thread t2 = std::thread(work_func);

	
	t1.join();
	t2.join();

}