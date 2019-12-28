#include <iostream>

using namespace std;

void func1(int *a)
{
	*a = *a + 1;
	cout << *a << endl;;
}

void main()
{
	int a = 10;

	func1(&a);
	cout << a;
}