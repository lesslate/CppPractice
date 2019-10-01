#include <functional>
#include <iostream>

using namespace std;

int multiple(int a, int b)
{
	return a * b;
}



struct PrintNum
{
	void operator()(int i) const
	{
		cout << i << endl;
	}
};

struct Foo
{
	Foo(int num) : num_(num) {}
	void print_add(int i) const { std::cout << num_ + i << '\n'; }
	int num_;
};

int main()
{
	

	auto func1 = std::bind(multiple, 5, 10);
	auto func2 = std::bind(multiple, 2, 5);

	cout << func1() << " " << func2() << endl;

	

	int a = 10;
	int b = 2;

	auto func3 = std::bind(multiple, std::cref(a), std::cref(b)); // 호출되는 시점의 변수 값으로 바인딩된다
	
	cout << func3() << endl;

	a = 20;
	b = 5;

	cout << func3() << endl;
	
	// 일반함수
	std::function<int(int,int)> f1 = multiple;
	cout << f1(10, 100) << endl;

	// 람다함수 
	std::function<int(int, int)> f2 = [](int a,int b)->int { return multiple(a,b); };
	cout << f2(20, 20) << endl;

	// std::bind
	std::function<int(int, int)> f3 = std::bind(multiple, std::placeholders::_1, std::placeholders::_2);
	cout << f3(30,30) << endl;
}