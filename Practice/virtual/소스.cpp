#include <iostream>
using namespace std;

class Base
{
public:
	virtual void f()
	{
		cout << "Base::f() called" << endl;
	}
};

class Derived : public Base
{
public: 
	virtual void f()
	{
		cout << "Derived::f() called" << endl;
	}
};

int main()
{
	Derived d;
	Derived *pDer = &d; // ��ü d�� ����Ų��
	pDer->f(); // Derived::f()

	Base *pBase = pDer; // ��ĳ���� ��ü d�� ����Ų��
	pBase->f(); // ���� ���ε� �߻� Derived::f()
}