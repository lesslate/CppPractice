#include <iostream>

class MyClass
{
public:
	void Foo() {
		std::cout << "Foo" << std::endl;
		callByFoo();
	}

	void Foo() const {
		std::cout << "Foo const" << std::endl;
		callByFoo(); //const�Լ������� const�� �ƴ� �޼ҵ�� �θ� �� ����. error
	}

	void callByFoo() {
		std::cout << "callByFoo" << std::endl;
	}
	void callByFoo() const
	{
		std::cout << "callByFoo const" << std::endl;
	}

};

int main()
{
	MyClass cc;
	const MyClass& ccc = cc;
	cc.Foo();
	ccc.Foo();

}