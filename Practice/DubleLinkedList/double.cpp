#include<iostream>

using namespace std;
struct Node 
{
	int data;
	Node *next;
	Node *prev;

	Node() 
	{
		next = prev = NULL;
		data = 0;
	}
	Node(int i, Node* ptr)
	{
		data = i;
		prev = ptr;
		next = ptr->next;
		next->prev = prev->next = this;
	}
	void Delete()
	{
		prev->next = next;
		next->prev = prev;
		delete this;
	}
};

struct DoubleLinkedList 
{
	Node *head;
	Node *tail;
	int count;
	DoubleLinkedList() 
	{ 
		count = 0;
		head = new Node(); //���̸� �����ؼ� ������ �ְ��Ѵ�.
		tail = new Node(); //���̸� �����ؼ� ������ �ְ��Ѵ�.
		head->next = tail; //���ο����Ѵ�.
		tail->prev = head;
	}
	~DoubleLinkedList()
	{
		while (head->next != tail)
		{
		head->next->Delete();
		}
		delete head;
		delete tail;
	}
	void FirstInsert(int i) //head ������ �߰��Ѵ�.
	{ 
		new Node(i, head);
	}
	void EndInsert(int i) //tail �տ� �߰��Ѵ�.
	{ 
		new Node(i, tail->prev);
	}
	void FirstDelete() //head ���� ��� �����Ѵ�.
	{ 
		if (head->next == tail)
		{
			return;
		}
		head->next->Delete();
	}
	void EndDelete()  //tail �տ� �����Ѵ�.
	{
		if (tail->prev == head)
		{
			return;
		}
		tail->prev->Delete();
	}
	void PrintFirst() 
	{
		Node* tmp = head;
		while (tmp->next != tail) {
			cout << tmp->next->data << endl; 
			tmp = tmp->next;
		}
	}
};

int main() {
	DoubleLinkedList *list = new DoubleLinkedList();
	list->FirstInsert(1); //1�� �����Ѵ�.(�����)
	list->FirstInsert(3); //3�� �����Ѵ�.(1�տ�)
	list->FirstInsert(5); //5�� �����Ѵ�.(3�տ�)
	list->FirstDelete(); //5�� �����Ѵ�
	list->EndInsert(100); //100�� �����Ѵ�.(����ڿ�)
	list->EndInsert(200); //200�� �����Ѵ�.(100�ڿ�)
	list->EndInsert(300); //300�� �����Ѵ�.(200�ڿ�)
	list->EndDelete(); //300�� �����Ѵ�.
	list->PrintFirst();
	delete list;
}
