#include <iostream>

using namespace std;

int main()
{
	int array[5] = { 9,7,5,3,1 };

	cout << array[0] << " " << array[1] << endl;
	cout << array << endl;
	cout << &array[2] << endl;

	cout << *array << endl;

	int *ptr = array;
	cout << ptr << endl;
	cout << *ptr << endl;


	char name[] = "jackjack";
		cout << *name << endl;


}