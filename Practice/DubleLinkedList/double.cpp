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
		head = new Node(); //더미를 선언해서 가지고 있게한다.
		tail = new Node(); //더미를 선언해서 가지고 있게한다.
		head->next = tail; //서로연결한다.
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
	void FirstInsert(int i) //head 다음에 추가한다.
	{ 
		new Node(i, head);
	}
	void EndInsert(int i) //tail 앞에 추가한다.
	{ 
		new Node(i, tail->prev);
	}
	void FirstDelete() //head 다음 노드 삭제한다.
	{ 
		if (head->next == tail)
		{
			return;
		}
		head->next->Delete();
	}
	void EndDelete()  //tail 앞에 제거한다.
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
	list->FirstInsert(1); //1을 삽입한다.(가장앞)
	list->FirstInsert(3); //3을 삽입한다.(1앞에)
	list->FirstInsert(5); //5을 삽입한다.(3앞에)
	list->FirstDelete(); //5를 삭제한다
	list->EndInsert(100); //100을 삽입한다.(가장뒤에)
	list->EndInsert(200); //200을 삽입한다.(100뒤에)
	list->EndInsert(300); //300을 삽입한다.(200뒤에)
	list->EndDelete(); //300을 삭제한다.
	list->PrintFirst();
	delete list;
}
