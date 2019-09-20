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

	cout << "7���� ������ ������ ���Ұ� 5�� �ִ� vector ����" << endl;

	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << endl;
	}
	cout << endl;

	cout << "size : " << v.size(); // ���� ����
	cout << " capacity : " << v.capacity()<< endl;  // �Ҵ�� �޸��� ũ��
		
////////////////////////////////////////////////////////////////////////////

	cout << endl << "-----resize(10,1)-----" << endl;

	v.resize(10,1);  // ���� ���� 10���� Ȯ��, ä���� ���Ҵ� 1�̵ȴ�

	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	cout << endl;

	cout << "size : " << v.size(); // ���� ����
	cout << " capacity : " << v.capacity()<< endl; // �Ҵ�� �޸��� ũ��

////////////////////////////////////////////////////////////////////////////

	cout << endl << "-----pop 3�� ����-----" << endl;

	v.pop_back();
	v.pop_back();
	v.pop_back();


	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}
	cout << endl;

	cout << "size : " << v.size(); // ���� ����
	cout << " capacity : " << v.capacity() << endl;  // �Ҵ�� �޸��� ũ��
	

////////////////////////////////////////////////////////////////////////////

	cout << endl << "-- resize(3) -- " << endl;

	v.resize(3);       

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}
	cout << endl;

	cout << "size : " << v.size(); // ���� ����
	cout << " capacity : " << v.capacity() << endl;  // �Ҵ�� �޸��� ũ��


////////////////////////////////////////////////////////////////////////////


	cout << endl << "-- vector clear() -- " << endl;

	v.clear();    // ���͸� ���� (�޸𸮴� ��������)

	if (v.empty()) // ���Ͱ� ������� Ȯ��
	{
		cout << "Vector v is empty" << endl;
	}

	cout << endl;

	cout << "size : " << v.size(); // ���� ����
	cout << " capacity : " << v.capacity() << endl;  // �Ҵ�� �޸��� ũ��


}

////////////////////////////////////////////////////////////////////////////
