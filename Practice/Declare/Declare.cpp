#include <iostream>

using namespace std;

//Forward Declaration
int add(int a, int b);
int subtract(int a, int b);

int main()
{
	cout << add(1, 2) << endl;
	cout << subtract(1, 2) << endl;

	return 0;
}

//Definition
int add(int a, int b)
{
	return a + b;
}

int subtract(int a, int b)
{
	return a - b;
}
