#include <iostream>

using namespace std;

struct Node
{
	int data;
	struct Node* link; // 이 구조체 자체를 가리키는 포인터
};

struct HeadNode
{
	Node* head;
};

class Singlist
{
public:
	/* 리스트 생성, 헤드 노드 */
	HeadNode* createList()
	{
		HeadNode* h = new HeadNode;
		h->head = nullptr;
		return h;
	}
	
	/* 리스트의 마지막에 노드 삽입 */
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

	/* 리스트의 마지막 노드 삭제 */
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

	/* 리스트의 특정 노드 삭제 */
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
		cout << del_data << " 데이터 값을 가진 노드가 삭제됐습니다" << endl;
		return;
	}

	/* 리스트에 특정 노드 삽입 */
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

	/* 리스트의 특정 노드 검색 */
	void searchNode(HeadNode* h, int this_data)
	{
		Node* someNode;
		someNode = h->head;
		
		while (someNode->data != this_data)
		{
			someNode = someNode->link;
		}
		cout << this_data << " 데이터를 검색하는 데 성공했습니다" << endl;
	}

	/* 연결리스트 출력 */
	void printList(HeadNode* l)
	{
		Node* p;
		cout << "연결리스트 목록 = ( ";
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
	
	cout << "1. 빈 연결리스트를 생성했습니다.  " << endl << endl;
	int data1, data2, data3;
	cout << "2. 연결리스트에 추가할 노드의 데이터를 3개 정해주세요: ";
	cin >> data1 >> data2 >> data3;
	list.addNode(l,data1);
	list.printList(l);
	list.addNode(l, data2);
	list.printList(l);
	list.addNode(l, data3);
	list.printList(l);
	cout << endl;
	
	cout << "3. 탐색할 노드의 데이터를 정해주세요: ";
	int data4;
	cin >> data4;
	list.searchNode(l, data4);
	
	cout << endl;
	cout << "4-1. 어떤 노드 뒤에 노드를 추가할건가요? ";
	int data5, data6;
	cin >> data5;
	cout << "4-2. 그 노드 뒤에 어떤 데이터를 가진 노드를 추가할건가요? ";
	cin >> data6;
	list.addThisNode(l, data5, data6);
	list.printList(l);
	cout << endl;

	cout << "5. 삭제하고자 하는 노드를 알려주세요: ";
	int data7;
	cin >> data7;
	list.deleteThisNode(l, data7);
	list.printList(l);
	cout << endl;
	
	cout << "6. 마지막 노드를 삭제합니다. " << endl;
	list.deleteNode(l);
	list.printList(l);
	cout << endl;
	return 0;
	

}