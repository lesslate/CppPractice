//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct Person
//{
//	double height;
//	float  weight;
//	int	   age;
//	string name;
//
//};
//
//void printPerson(Person ps)
//{
//	cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name;
//	cout << endl;
//}
//
//int main()
//{
//	Person me{ 2.0, 100.0, 20, "Jack" };
//	printPerson(me);
//}


//����ü �ȿ� �Լ�
#include <iostream>
#include <string>

using namespace std;


struct Person
{
	double height;
	float  weight;
	int	   age;
	string name;

	void Print()
	{
		cout << height << " " << weight << " " << age << " " << name;
		cout << endl;
	}
};

//����ü �ȿ� ����ü
struct Family
{
	Person me, mom, dad;
};

int main()
{
	Person me{ 2.0, 100.0, 20, "Jack" };
	me.Print;
}