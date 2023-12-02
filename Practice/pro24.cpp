#include<iostream>
using namespace std;

class Node
{
	public:
		Node *prev;
		int data;
		Node *next;
	
	Node(int a)
	{
		data=a;
		prev=next=NULL;		
	}
};
class DLL
{
	public:
		Node *head;
		DLL()
		{
			head=NULL;
		}
		void create();
		void show();
};
void DLL::create()
{
	Node *p;
	int n,x;
	cout<<"Enter how many elements u want = ";
	cin>>n;
	cout<<"\nEnter the data for 1st node = ";
	cin>>x;
	head = new Node(x);
	p=head;
	for(int i=1; i<n; i++)
	{
		cout<<"\nEnter data for next node = ";
		cin>>x;
		p->next = new Node(x);
		p->next->prev=p;
		p=p->next;
	}
}
void DLL::show()
{
	Node *p=head;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p = p->next;
	}
	
};
int main()
{
	DLL D1;
	D1.create();
	D1.show();

 	return 0;
}

