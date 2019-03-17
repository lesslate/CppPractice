#include <iostream>

using namespace std;


int& getvalue(int x)
{
	int value = x * 2;
	return value;
}
int main()
{
	int &value2 = getvalue(3);

	cout << value2 << endl;
	cout << value2 << endl;

}