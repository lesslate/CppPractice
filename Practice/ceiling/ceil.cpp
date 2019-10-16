#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	int n, p;
	cin >> n >> p;


	cout.precision(3);
	float a = (100 - 5) / 21.0;
	float b = (100 - 5) / 21;

	cout << fixed << a << endl;
	cout << fixed << b << endl;

	int c = (int)ceil((100.0 - 5) / 21);
	int d = (int)ceil((100 - 5) / 21);

	cout << fixed << c << endl;
	cout << fixed << d << endl;
}