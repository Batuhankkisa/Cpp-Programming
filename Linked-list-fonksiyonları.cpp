#include <iostream>
#include <string>
using namespace std;
class Node{
	public:
	int data;
	string name;
	Node* next;
}*start;

void Ekle(int x,string y)
{
	if(start==NULL)
	{
	start=new(Node);
	start->data=x;
	start->name=y;
	start->next=NULL;
	}
	else
		{
		Node *current=start;
		while(current->next!=NULL)
		{
		current=current->next;
		}
		current->next=new(Node);
		current->next->data=x;
		current->next->name=y;
		current->next->next=NULL;
		}
	}
void goster(Node* n)
{
	while(n!=NULL)
	{
		cout<<"Data: "<<n->data<<endl;
		cout<<"Name: "<<n->name<<endl;
		cout<<"Adres: "<<n->next<<endl;
		n=n->next;
		}
	}
int Arama(int x)
{
	Node* current=start;
	while(current !=NULL && current->data !=x)
	{
		current=current->next;
	}
	if(current !=NULL)
	{
		current=current->next;
		return 1;
	}
	else
	{
		return -1;
	}
}
void sil(int x)
{
	Node* current=start;
	Node* prev=NULL;
	while(current && current->data!=x)
	{
		prev=current;
		current=current->next;
	}
	if(current)
	{
		if(prev){
			prev->next=current->next;
			delete current;
		}
		else{
			start_current->next
			delete current;
		}
	}
}
int main()
{
	int menu=0,n,m;
	string f;
	while(1){
	cout<<"\n Menu: 1.Ekle 2.Arama 3.Silme 4.Gorunutle 5.Cikis \n "<<endl;
	cin>>menu;
	switch(menu)
	{
		case 1:cout<<"Listede kac eleman olacak: "<<endl;
			cin>>n;
			for (int i=1;i<=n;i++){
				cout<<i<<". Eleman"<<endl;
				cin>>m;
				cout<<i<<". Ad"<<endl;
				cin>>f;
				Ekle(m,f);
			}
	break;
	case 2: cout<<"Aramak istediginiz eleman"<<endl;
		cin>>n;
		cout<< Arama(n);
		break;
	case 3: cout<<"Silmek istediginiz eleman:"<<endl;
		cin>>n;
		sil(n);
		break;
	case 4: goster(start);
		break;
	case 5: exit(0);
	}
}
}	
