#include <iostream>

using namespace std;

struct Node
{
	int data;
	struct Node* link; // �� ����ü ��ü�� ����Ű�� ������
};

struct HeadNode
{
	Node* head;
};

class Singlist
{
public:
	/* ����Ʈ ����, ��� ��� */
	HeadNode* createList()
	{
		HeadNode* h = new HeadNode;
		h->head = nullptr;
		return h;
	}
	
	/* ����Ʈ�� �������� ��� ���� */
	void addNode(HeadNode* h, int x)
	{
		Node* newNode = new Node;
		Node* lastNode;
		newNode->data = x;
		newNode->link = nullptr;

		if (h->head == nullptr)
		{
			h->head = newNode;
			return;
		}

		lastNode = h->head;
		while (lastNode->link != nullptr)
		{
			lastNode = lastNode->link;
		}
		lastNode->link = newNode;
	}

	/* ����Ʈ�� ������ ��� ���� */
	void deleteNode(HeadNode* h)
	{
		Node* preNode;
		Node* delNode;
		
		if (h->head == nullptr) return;
		if (h->head->link == nullptr)
		{
			delete h->head;
			h->head = nullptr;
			return;
		}
		else
		{
			preNode = h->head;
			delNode = h->head->link;
			
			while (delNode->link != nullptr)
			{
				preNode = delNode;
				delNode = delNode->link;
			}
			delete delNode;
			preNode->link = nullptr;
		}
	}

	/* ����Ʈ�� Ư�� ��� ���� */
	void deleteThisNode(HeadNode* h, int del_data)
	{
		Node* delNode;
		Node* preNode;
		preNode = h->head;
		
		while (preNode->link->data != del_data)
		{
			preNode = preNode->link;
		}
		
		delNode = preNode->link;
		preNode->link = delNode->link;
		delete delNode;
		cout << del_data << " ������ ���� ���� ��尡 �����ƽ��ϴ�" << endl;
		return;
	}

	/* ����Ʈ�� Ư�� ��� ���� */
	void addThisNode(HeadNode* h, int afterthisdata, int adddata)
	{
		Node* preNode;
		preNode = h->head;
		
		while (preNode->data != afterthisdata)
		{
			preNode = preNode->link;
		}
		
		Node* newNode = new Node;
		newNode->data = adddata;
		newNode->link = preNode->link;
		preNode->link = newNode;
		return;
	}

	/* ����Ʈ�� Ư�� ��� �˻� */
	void searchNode(HeadNode* h, int this_data)
	{
		Node* someNode;
		someNode = h->head;
		
		while (someNode->data != this_data)
		{
			someNode = someNode->link;
		}
		cout << this_data << " �����͸� �˻��ϴ� �� �����߽��ϴ�" << endl;
	}

	/* ���Ḯ��Ʈ ��� */
	void printList(HeadNode* l)
	{
		Node* p;
		cout << "���Ḯ��Ʈ ��� = ( ";
		p = l->head;
		
		while (p != nullptr)
		{
			cout << p->data;
			p = p->link;
			if (p != nullptr) cout << " --> ";
		}
		cout << " )" << endl;
	}
};

int mainSinglist()
{
	Singlist list;
	
	HeadNode* l;
	
	l = list.createList();
	
	cout << "1. �� ���Ḯ��Ʈ�� �����߽��ϴ�.  " << endl << endl;
	int data1, data2, data3;
	cout << "2. ���Ḯ��Ʈ�� �߰��� ����� �����͸� 3�� �����ּ���: ";
	cin >> data1 >> data2 >> data3;
	list.addNode(l,data1);
	list.printList(l);
	list.addNode(l, data2);
	list.printList(l);
	list.addNode(l, data3);
	list.printList(l);
	cout << endl;
	
	cout << "3. Ž���� ����� �����͸� �����ּ���: ";
	int data4;
	cin >> data4;
	list.searchNode(l, data4);
	
	cout << endl;
	cout << "4-1. � ��� �ڿ� ��带 �߰��Ұǰ���? ";
	int data5, data6;
	cin >> data5;
	cout << "4-2. �� ��� �ڿ� � �����͸� ���� ��带 �߰��Ұǰ���? ";
	cin >> data6;
	list.addThisNode(l, data5, data6);
	list.printList(l);
	cout << endl;

	cout << "5. �����ϰ��� �ϴ� ��带 �˷��ּ���: ";
	int data7;
	cin >> data7;
	list.deleteThisNode(l, data7);
	list.printList(l);
	cout << endl;
	
	cout << "6. ������ ��带 �����մϴ�. " << endl;
	list.deleteNode(l);
	list.printList(l);
	cout << endl;
	return 0;
	

}