/*3.Create 2 singly linked lists of integers.Sort them in ascending order.
Merge them in third list so that third list will also be sorted.*/
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
		void sort();
		void addatend(int);
		void merge_sort(SLL,SLL);
};
void SLL::create()
{
	Node *p=NULL;
	int n,x;
	cout<<"\nEnter how many Nodes u want = ";
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
void SLL::addatend(int end)
{
	
	Node *q= new Node(end);
	if(head == NULL)
	{
		head = q;
		return;
	}
	Node *p=NULL;
	p=head;
//	q = new Node(end);
	while(p->next != NULL)
	{
		p=p->next;
	}
	p->next=q;
	
}
void SLL::sort()
{
	Node *p;
	Node *q;
	int temp;
	for(p=head; p!=NULL; p=p->next)
	{
		for(q=p->next; q!=NULL; q=q->next)
		{
			if(p->data>q->data)
			{
				temp=p->data;
				p->data=q->data;
				q->data=temp;
			}
		}
	}
}
void SLL::merge_sort(SLL S1, SLL S2)
{
	
	Node *p = S1.head;
	Node *q = S2.head;
	
	while(p!=NULL && q!=NULL)
	{
		if(p->data < q->data)
		{
			
			addatend(p->data);
			p=p->next;
		}
		else
		{
			
			addatend(q->data);
			q=q->next;
		}
	}
	

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
	S1.sort();
	S2.sort();
	cout<<"After sorting S1"<<endl;
	S1.show();
	cout<<"After sorting S2"<<endl;
	//S3.addatend(39);
	S3.show();
	
	
	cout<<"After merging"<<endl;
	S3.merge_sort(S1,S2);
	S3.show();
	

 	return 0;
}

