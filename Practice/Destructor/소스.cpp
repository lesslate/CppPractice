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
	cout << "������" << radius << "�� ����" << endl;

}

Circle::Circle(int r)
{
	radius = r;
	cout << "������" << radius << "�� ����" << endl;
}

Circle::~Circle()
{
	cout << "������" << radius << "�� �Ҹ�" << endl;

}

int main()
{
	Circle donut;
	Circle pizza(30);
	return 0;



}