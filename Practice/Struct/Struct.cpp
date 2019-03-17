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


//구조체 안에 함수
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

//구조체 안에 구조체
struct Family
{
	Person me, mom, dad;
};

int main()
{
	Person me{ 2.0, 100.0, 20, "Jack" };
	me.Print;
}