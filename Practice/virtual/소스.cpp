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
	Derived *pDer = &d; // 객체 d를 가리킨다
	pDer->f(); // Derived::f()

	Base *pBase = pDer; // 업캐스팅 객체 d를 가리킨다
	pBase->f(); // 동적 바인딩 발생 Derived::f()
}