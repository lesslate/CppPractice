#include <iostream>

using namespace std;

class Circle
{
public:
	Circle();
	Circle(int r);
	~Circle(); // initialize Destructor
	
protected:
	int radius;



};

Circle::Circle()
{
	radius = 1;
	cout << "반지름" << radius << "원 생성" << endl;

}

Circle::Circle(int r)
{
	radius = r;
	cout << "반지름" << radius << "원 생성" << endl;
}

Circle::~Circle()
{
	cout << "반지름" << radius << "원 소멸" << endl;

}

int main()
{
	Circle donut;
	Circle pizza(30);
	return 0;



}