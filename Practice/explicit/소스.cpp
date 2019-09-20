#include <iostream>

using namespace std;

template <class T>
void myswap(T&a, T&b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <> void myswap<double>(double&, double&)
{

};

int main()
{
	int a = 4, b = 5;
	myswap(a, b);
	cout << "a=" << a << ", " << "b=" << b << endl;

	double c = 0.3, d = 12.5;
	myswap(c, d);
	cout << "c=" << c << ", " << "d=" << d << endl;

}