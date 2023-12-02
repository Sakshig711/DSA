#include<iostream>
using namespace std;
class SLL;
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
	private:
		Node *head;
	public:
		SLL()
		{
			head=NULL;
		}
		void create();
		void show();
		int count();
		int search(int x);
		void addatbeg(int x);
		void addatend(int c);	
		
};

void SLL::create()
{
	Node *p=NULL;
	int n,a;
	cout<<"Enter how many nodes u want = ";
	cin>>n;
	
	cout<<"\nEnter the 1st node = ";
	cin>>a;
	
	head = new Node(a);
	p=head;
	
	for(int i=1; i<n; i++)
	{
		cout<<"\nEnter the data for another node = ";
		cin>>a;
		p->next = new Node(a);
		p = p->next;
	}
}

void SLL::show()
{
	Node *p=NULL;
	p=head;
	
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p = p->next;
	}
}

int SLL::count()
{
	Node *p=NULL;
	p=head;
	int c=0;
	while(p!=NULL)
	{
		c++;
		p=p->next;
	}
	return c;
}

int SLL::search(int x)
{
	Node *p=NULL;
	if(head==NULL)
	{
		return 0;
	}
	p=head;
	while(p!=NULL)
	{
		if(p->data == x)
		{
			return 1;
		}
		p=p->next;
	}
}
void SLL::addatbeg(int x)
{
	Node *p;
	p = new Node(x);
	p->next=head;
	head=p;
}
void SLL::addatend(int c)
{
	Node *p=NULL,*q=NULL;
	p = new Node(c);
	if(head==NULL)
	{
		head=p;
	}
	else
	{
		q=head;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
		
	}
}
int main()
{
	SLL S1;
	int x;
	S1.create();
	S1.show();
	
	int n = S1.count();
	
	cout<<"\nNo of data "<<n;
	
	cout<<"\n\nEnter data to search = ";
	cin>>x;
	if(S1.search(x)==1)
	{
		cout<<"\nData is exist"<<endl;
	}
	else
	{
		cout<<"\nData is not exist"<<endl;
	}
	
	cout<<"Enter the add Node = ";
	cin>>x;
	S1.addatbeg(x);
	S1.show();
	
	int c;
	cout<<"Enter to add at end = ";
	cin>>c;
	S1.addatend(c);
	S1.show();
	
	
 	return 0;
}

