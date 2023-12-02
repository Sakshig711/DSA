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
		Node *head;
		SLL()
		{
			head=NULL;
		}
		void create();
		void show();
		int count();
		void sort();
		void addatend(int end);
		void merge(SLL,SLL);
		
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

int SLL::count()
{
	Node *p=NULL;
	p=head;
	int cnt=0;
	while(p!=NULL)
	{
		cnt++;
		p=p->next;
	}
	return cnt;
}

void SLL::sort()
{
	Node *p,*q;
	int Temp;
	for(p=head; p!=NULL; p=p->next)
	{
		for(q=p->next; q!=NULL; q=q->next)
		{
			if(p->data>q->data)
			{
				Temp=p->data;
				p->data=q->data;
				q->data=Temp;
			}
		}
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
void merge(SLL S1, SLL S2)
{
	Node *p,*q;
	p=S1.head;
	while(p!=NULL)
	{
		addatend(p->data);
		p=p->next;
		
	}
	q=S2.head;
	while(p!=NULL)
	{
		addatend(p->data);
		p=p->next;	
	}
}

int main()
{
	SLL S1,S2,S3;
	S1.create();
	S1.show();
	S2.create();
	S2.show();
	int res;
	res=S1.count();
	if(res==0)
	{
		cout<<"List is empty"<<endl;
	}
	else
	{
		cout<<"\nList is not empty"<<endl;
		cout<<res<<" nodes are there"<<endl;
	}
	
	int end;
	cout<<"\nEnter data to add at end = ";
	cin>>end;
	S1.addatend(end);
	S1.show();
	
	S1.sort();
	cout<<"After sorting = ";
	S1.show();
	
	S2.sort();
	cout<<"After sorting = ";
	S2.show();
	
	S3.merge(S1,S2);
	S3.show();

 	return 0;
}

