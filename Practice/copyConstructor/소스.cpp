#include <iostream>

using namespace std;

class Person
{
public:
	int age;
	char* name;

public:
	Person(int _age, const char* _name)
	{
		age = _age;
		name = new char[strlen(_name) + 1];
		strcpy(name, _name);
	}

	Person(const Person& s)
	{
		age = s.age;
		name = new char[strlen(s.name) + 1];
		strcpy(name, s.name);
	}
	//Person(const Person& s)
	//{
	//	age = s.age;
	//	name = s.name;
	//}

	~Person()
	{
		delete name;
		cout << "�Ҹ�!" << endl;
	}

	void printPerson()
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
};

void main()
{
	Person A(22, "jack");
	Person B = A;

	A.age = 28;
	strcpy(A.name, "John");

	A.printPerson();
	B.printPerson();

}