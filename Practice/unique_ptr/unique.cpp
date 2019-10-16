#include <iostream>
#include <memory>
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
	unique_ptr<Monster> goblin = make_unique<Monster>("���", 100.f, 20.f);

	goblin->PrintMonsterInfo();

	return 0;
}


