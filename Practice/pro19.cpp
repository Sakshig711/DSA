#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
	Node()
	{
		data=0;
		next=NULL;
	}
	Node(int a)
	{
		data=a;
		next=NULL;
	}
	~Node()
	{
		cout<<"\nend";
	}
};

class CLL
{
	public:
		Node *front;
		Node *rear;
		
	CLL()
	{
		front=NULL;
		rear=NULL;
	}
	void create();
	void show();
};

void CLL::create()
{
	
	int n,x;
	cout<<"Enter how many Nodes u want to store? = ";
	cin>>n;
	cout<<"\nEnter the 1st Node = ";
	cin>>x;
	front = new Node(x);
	rear=front;
	rear->next=front;
	Node *p;
	p=front;
	for(int i=1; i<n; i++)
	{
		cout<<"\nEnter data for next Node = ";
		cin>>x;
		p->next = new Node(x);
		p=p->next;
	}
	p->next=front;
	rear=p;
}
void CLL::show()
{
	Node*p;
	p=front;
	do
	{
		cout<<p->data<<" ";
		p=p->next;
		
	}while(p!=front);
}
int main()
{
	CLL C1;
	C1.create();
	C1.show();


 	return 0;
}

