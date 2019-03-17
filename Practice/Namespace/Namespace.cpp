#include <iostream>

using namespace std;

namespace Myspace {

	int dosomething(int a, int b)
	{
		return a + b;
	}
}
int dosomething(int a, int b)
{

	return a * b;

}

int main()
{
	cout << Myspace::dosomething(3, 4) << endl;;
	cout << dosomething(3, 4) << endl;;

}