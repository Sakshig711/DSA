/*2.create a 2 linked lists of integers.Merge these 2 lists in a third
linked list. Print 3rd linked list.(Sorting is not necessary)*/
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
};
class SLL
{
	public:
		Node* head;
		SLL()
		{
			head=NULL;
		}
		void create();
		void show();
		void merge(SLL, SLL);
		void addatend(int);
};
void SLL::create()
{
	Node *p=NULL;
	int n,x;
	cout<<"Enter how many Nodes u want = ";
	cin>>n;
	
	cout<<"\nEnter the 1st node = ";
	cin>>x;
	
	head = new Node(x);
	p = head;
	
	for(int i=1; i<n; i++)
	{
		cout<<"\nEnter data for next Node = ";
		cin>>x;
		p->next=new Node(x);
		p=p->next;
	}
	
}

void SLL::show()
{
	Node *p=NULL;
	p=head;
	
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
}
void SLL::addatend(int end)
{
	Node *p=NULL;
	Node *q=NULL;
	p=head;
	q = new Node(end);
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=q;
	
}
void SLL::merge(SLL S1, SLL S2)
{
	Node *p=S1.head;
	Node *q=S1.head;
	while(p!=NULL)
	{
		addatend(p->data);
		p=p->next;
	}
	while(q!=NULL)
	{
		addatend(q->data);
		q=q->next;
	}
}
int main()
{
	SLL S1,S2,S3;
	S1.create();
	S2.create();
	S1.show();
	S2.show();
	S3.merge(S1,S2);
	S3.show();
	


 	return 0;
}

