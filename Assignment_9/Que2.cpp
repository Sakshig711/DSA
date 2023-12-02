/*Q2.WAP to create DCLL and implement following functions.
-create()
-show()
-count()
-search()
-addatbeg()
-addbypos()
-delatbeg()
-delbypos()*/
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
			next=prev=NULL;
		}
};
class DCLL
{
	public:
		Node *front;
		Node *rear;
		DCLL()
		{
			front=rear=NULL;
		}
		void create();
		void show();
		int count();
		int search(int );
		void addatbeg(int );
};
void DCLL::create()
{
	Node *p;
	int n,x;
	cout<<"\nEnter how many nodes u want = ";
	cin>>n;
	cout<<"\nEnter the 1st Node = ";
	cin>>x;
	front = new Node(x);
	p=front;
	for(int i=1; i<n; i++)
	{
		cout<<"\nEnter next node = ";
		cin>>x;
		p->next = new Node(x);
		p->next->prev=p;
		p=p->next;
	}
	rear=p;
	p->next=front;
	front->prev=p;
}
void DCLL::show()
{
	Node *p=front;
	if(front==NULL)
	{
		cout<<"empty list";
		return;
	}
	do
	{
		cout<<p->data<<endl;
		p=p->next;
		
	}while(p->prev!=rear);
}
int DCLL::count()
{
	Node *p=front;
	int cnt=0;
	do
	{
		cnt++;
	}while(p->prev!=rear);
	return cnt;
}
int DCLL::search(int s)
{
	Node *p=front;
	if(front==NULL)
	{
		cout<<"empty list";
	}
	else
	{
		do
		{
			if(p->data==s)
			{
				return 1;
				break;
			}
		}while(p->prev!=rear);
	}
	return 0;
}
void DCLL::addatbeg(int beg)
{
	Node *p=front;
	Node *q;
	q = new Node(beg);
	if(front==NULL)
	{
		cout<<"Empty";
	}
	else
	{
		q->prev=rear;
		q->next=p;
		p->prev=q;
		front=q;
		
	}
}
int main()
{
	DCLL D1;
	int ans,s,beg;
	D1.create();
	D1.show();
	ans=D1.count();
	cout<<ans<<" node exist"<<endl;
	
	cout<<"\nEnter the data for search = ";
	cin>>s;
	if(D1.search(s))
	{
		cout<<"\nData found"<<endl;
	}
	else
	{
		cout<<"\nData not found"<<endl;
	}
	cout<<"\nEnter data to addatbeg = ";
	cin>>beg;
	D1.addatbeg(beg);
	D1.show();
	


 	return 0;
}

