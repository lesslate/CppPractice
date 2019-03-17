#include <iostream>
#include <cstring>
#include <Windows.h>  // VC++에서 Sleep()을 가지고 있는 헤더

using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char myname[], int myage)  // 생성자
	{
		int len = strlen(myname) + 1; //stlen() 문자열 길이 + 널 문자 '\o'
		name = new char[len];
		strcpy_s(name, len, myname);  // VC++ 에서만 사용. name이 포인터이므로 크기 len이 꼭 필요함.
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person() // 소멸자
	{
		delete[] name;
		cout << "destructor is called!" << endl;
		Sleep(1000); // 1000 마이크로 초 = 1초
	}
};

int main(void)
{
	Person man1("Park Hyo Won", 14);
	Person man2("La Tae In", 14);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	system("pause");  // VC++ 에서만 필요

	return 0;
}