#include <iostream>
	using namespace std;
	class Node {
	public:
	int data;
	Node* next;
	}*yeniadres, *ilk, *son;
	
	int main()
	{
		yeniadres=( Node*)malloc(sizeof(Node));
		cout<<"Yeni Adres: "<<yeniadres<<endl;
		yeniadres->data=2022;
		yeniadres->next=NULL;
		ilk=yeniadres;
		son=yeniadres;
		cout<<"1.data: "<<ilk->data<<" 1. next: "<<ilk->next<<endl;
		///////// TEKRAR YENÝ ADRES ALALIM
		
		cout<<endl;
		yeniadres=( Node*)malloc(sizeof(Node));
		cout<<"Yeni Adres 2: "<<yeniadres<<endl;
		
		ilk->next=yeniadres;
		
		yeniadres->data=2023;
		yeniadres->next=NULL;
		son=yeniadres;
		cout<<"1. data: "<<ilk->data<<" 1. next: "<<ilk->next<<endl;
		cout<<"2. data: "<<son->data<<" 2. next: "<<son->next<<endl;
	}
	
	
	// Mallocsuz //
#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
	};
void printList(Node* n)
{
while (n != NULL) {
	cout << "Data: "<<n->data << " "<<endl;
	cout << "Adres: "<<n->next << " "<<endl;
	n = n->next;
	}
}
int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	
	head = new Node();
	second = new Node();
	third = new Node();
	
	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;
	
	printList(head);
	return 0;
	}
