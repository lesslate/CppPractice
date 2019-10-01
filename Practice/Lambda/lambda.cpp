#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	
	//vector<int> v{1,2,3};


	//for_each(v.begin(), v.end(), [=](int val) {cout << [i]()->int {  int j = 2;  return [=]()-> int { return i / j; }(); }(); });

	//[i]() { int j = 2; [=] { cout << i / j; }(); }();

	int i = 8;
	[i]() mutable
	{
		int j = 2;
		[&, j]() mutable { i /= j; }();
		cout << "복사된 i: " << i;
	}();
	cout << " 기존 i: " << i;
}




