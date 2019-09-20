#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	v.reserve(7);        

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	cout << "7개의 공간을 가지고 원소가 5개 있는 vector 생성" << endl;

	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << endl;
	}
	cout << endl;

	cout << "size : " << v.size(); // 원소 갯수
	cout << " capacity : " << v.capacity()<< endl;  // 할당된 메모리의 크기
		
////////////////////////////////////////////////////////////////////////////

	cout << endl << "-----resize(10,1)-----" << endl;

	v.resize(10,1);  // 원소 갯수 10개로 확장, 채워진 원소는 1이된다

	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	cout << endl;

	cout << "size : " << v.size(); // 원소 갯수
	cout << " capacity : " << v.capacity()<< endl; // 할당된 메모리의 크기

////////////////////////////////////////////////////////////////////////////

	cout << endl << "-----pop 3번 수행-----" << endl;

	v.pop_back();
	v.pop_back();
	v.pop_back();


	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}
	cout << endl;

	cout << "size : " << v.size(); // 원소 갯수
	cout << " capacity : " << v.capacity() << endl;  // 할당된 메모리의 크기
	

////////////////////////////////////////////////////////////////////////////

	cout << endl << "-- resize(3) -- " << endl;

	v.resize(3);       

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}
	cout << endl;

	cout << "size : " << v.size(); // 원소 갯수
	cout << " capacity : " << v.capacity() << endl;  // 할당된 메모리의 크기


////////////////////////////////////////////////////////////////////////////


	cout << endl << "-- vector clear() -- " << endl;

	v.clear();    // 벡터를 비운다 (메모리는 남아있음)

	if (v.empty()) // 벡터가 비었는지 확인
	{
		cout << "Vector v is empty" << endl;
	}

	cout << endl;

	cout << "size : " << v.size(); // 원소 갯수
	cout << " capacity : " << v.capacity() << endl;  // 할당된 메모리의 크기


}

////////////////////////////////////////////////////////////////////////////
