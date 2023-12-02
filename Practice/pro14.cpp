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
		
};

void SLL::create()
{
	Node *p=NULL;
	int n,x;
	cout<<"Enter how many nodes u want = ";
	cin>>n;
	
	cout<<"\nEnter the 1st node = ";
	cin>>x;
	
	head = new Node(x);
	p=head;
	
	for(int i=1; i<n; i++)
	{
		cout<<"\nEnter the data for another node = ";
		cin>>x;
		p->next = new Node(x);
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
int main()
{
	SLL S1;
	S1.create();
	S1.show();
	
	int n = S1.count();
	
	cout<<"\nNo of data "<<n;
	int x;
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
	
 	return 0;
}

