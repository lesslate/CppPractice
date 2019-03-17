#include <iostream>
#include <cstring>
#include <Windows.h>  // VC++���� Sleep()�� ������ �ִ� ���

using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char myname[], int myage)  // ������
	{
		int len = strlen(myname) + 1; //stlen() ���ڿ� ���� + �� ���� '\o'
		name = new char[len];
		strcpy_s(name, len, myname);  // VC++ ������ ���. name�� �������̹Ƿ� ũ�� len�� �� �ʿ���.
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Person() // �Ҹ���
	{
		delete[] name;
		cout << "destructor is called!" << endl;
		Sleep(1000); // 1000 ����ũ�� �� = 1��
	}
};

int main(void)
{
	Person man1("Park Hyo Won", 14);
	Person man2("La Tae In", 14);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	system("pause");  // VC++ ������ �ʿ�

	return 0;
}