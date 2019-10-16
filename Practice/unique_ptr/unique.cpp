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
	Monster(const string& name, float hp, float damage); // 생성자 선언

	~Monster() { cout << "메모리가 해제되었습니다." << endl; }
	void PrintMonsterInfo();

};

Monster::Monster(const string& name, float hp, float damage) // 생성자 정의

{
	name_ = name;
	hp_ = hp;
	damage_ = damage;

	cout << "생성자 호출" << endl;

}

void Monster::PrintMonsterInfo()
{
	cout << "몬스터 이름 : " << name_ << endl;
	cout << "체력 : " << hp_ << endl;
	cout << "공격력 : " << damage_ << endl;
}
int main()
{
	unique_ptr<Monster> goblin = make_unique<Monster>("고블린", 100.f, 20.f);

	goblin->PrintMonsterInfo();

	return 0;
}


