#include <memory>
#include <iostream>
#include <string>
using namespace std;


class Monster
{

private:
	string name_;
	float hp_;
	float damage_;

public:
	Monster(const string& name, float hp, float damage); // ������ ����

	~Monster() { cout << "�޸𸮰� �����Ǿ����ϴ�." << endl; }
	void PrintMonsterInfo();

};

Monster::Monster(const string& name, float hp, float damage) // ������ ����

{
	name_ = name;
	hp_ = hp;
	damage_ = damage;

	cout << "������ ȣ��" << endl;

}

void Monster::PrintMonsterInfo()
{
	cout << "���� �̸� : " << name_ << endl;
	cout << "ü�� : " << hp_ << endl;
	cout << "���ݷ� : " << damage_ << endl;
}
int main()
{

	shared_ptr<Monster> dragon = make_shared<Monster>("�巡��", 5000.f, 500.f);

	cout << "���� ������ �� : " << dragon.use_count() << endl; // 1
	auto dragon2 = dragon;
	cout << "���� ������ �� : " << dragon.use_count() << endl; // 2

	dragon2->PrintMonsterInfo();
	cout << "�޸� ����" << endl;
	dragon2.reset(); // dragon2 ����
	
	cout << "���� ������ �� : " << dragon.use_count() << endl; // 1

	return 0;
}
