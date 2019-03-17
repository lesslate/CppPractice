#include <iostream>

using namespace std;

int main()
{
	int sum=0;
	int num;
	int flag=1;
	for(num=1; num<=99; num+=2)
	{
		sum += num * flag;
		flag *= -1;
	}

	cout << sum;

}