#include <iostream>
#include <string>

using namespace std;



class People {

private:

	int age;
	const char* name;
	double height;

public:

	void set_People(int _age, const char* _name, double _height);
	void show_People();



	People() {

		const char* t = "naddru";
		cout << "=== ������ ȣ�� : ���ڰ� ���� ===" << endl;
		age = 30;
		name = "naddru";
		height = 182;

	}

	People(int _age, const char* _name, double _height) {

		cout << "=== ������ ȣ�� : ���ڰ� 3�� ===" << endl;
		age = _age;
		name = _name;
		height = _height;

	}

};



void People::set_People(int _age, const char* _name, double _height) {

	age = _age;
	name = _name;
	height = _height;

}

void People::show_People() {

	cout << "���� : " << age << endl;
	cout << "�̸� : " << name << endl;
	cout << "Ű : " << height << endl;

}



int  main() {

	// �⺻ ������ ���

	People p = People();
	p.show_People();



	// �����ε� �� ������ ���

	People p2(31, "lina", 168);
	p2.show_People();



	//p ��ü�� ���� ���� 

	p.set_People(18, "child", 178);
	p.show_People();

	return 0;

}
