/*Q1.WAP to create DLL and implement following functions.
-create()
-show()
-search()
-count()
-addatbeg()
-addatend()
-addbypos()
-delatbeg()
-delatend()
-delbypos()
-show_reverse()*/

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
		int search(int s);
		int count();
		void addatbeg(int );
		void addatend(int );
		void addbypos(int ,int);
		void delatbeg();
		void delatend();
		void delbypos();
		void delatpos(int );
		void show_rev();
};

void DLL::create()
{
	Node *p;
	int n,x;
	cout<<"\nEnter how many nodes u want = ";
	cin>>n;
	cout<<"\nEnter the 1st Node = ";
	cin>>x;
	head = new Node(x);
	p=head;
	for(int i=1; i<n; i++)
	{
		cout<<"\nEnter next node = ";
		cin>>x;
		p->next = new Node(x);
		p->next->prev=p;
		p=p->next;
		
	}
}
void DLL::show()
{
	Node *p=head;
	if(head==NULL)
	{
		cout<<"empty list";
		return;
	}
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
}
int DLL::search(int s)
{
	Node *p=head;
	if(head==NULL)
	{
		cout<<"Empty";
		//return;
	}
	else
	{
		while(p!=NULL)
		{
			if(s==p->data)
			{
				return 1;
			}
			p=p->next;
		}
	}
}

int DLL::count()
{
	int cnt=0;
	Node *p=head;
	
		while(p!=NULL)
		{
			cnt++;
			p=p->next;
		}
		return cnt;
	
}

void DLL::addatbeg(int beg)
{
	Node *p=head;
	Node* q;
	q = new Node(beg);
	if(head==NULL)
	{
		head=q ;
	}
	else
	{
		p->prev=q;
		q->next=p;
		head=q;
	}
}

void DLL::addatend(int end)
{
	Node *p=head;
	Node *q;
	q = new Node(end);
	if(head==NULL)
	{
		head=q;
	}
	else
	{
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=q;
		q->prev=p;
	}
}
void DLL::addbypos(int pos, int num)
{
	Node *p=head;
	Node *q;
	q = new Node(num);
	if(pos<1 && pos>count())
	{
		cout<<"\nInvalid pos";
	}
	else if(pos==1)
	{
		addatbeg(num);
	}
	else if(pos==count())
	{
		addatend(num);
	}
	else
	{
		for(int i=1; i<pos-1; i++)
		{
			p=p->next;
		}
		q->next=p->next;
		p->next=q;
		q->prev=p;
		q->next->prev=q;
	}
}

void DLL::delatbeg()
{
	Node *p=head;
	if(head==NULL)
	{
		return;
	}
	head=p->next;
	p->next->prev=NULL;
	
	delete p;	
}

void DLL::delatend()
{
	Node *p=head;
	if(head==NULL)
	{
		return;
	}
	while(p->next!=NULL)
	{
		p=p->next;
	}

	p->prev->next=NULL;
	delete p;	
}

void DLL::delatpos(int pos1)
{
	Node *p=head,*q;
	if(head==NULL)
	{
		return;
	}
	else if(pos1==count())
	{
		delatend();
	}
	else if(pos1==1)
	{
		delatbeg();
	}
	else
	{
		for(int i=1; i<pos1-1; i++)
		{
			p=p->next;
		}
		q = p->next;
		q->next->prev=q->prev;
		p->next=q->next;
		delete q;
	}
}

void DLL::show_rev()
{
	Node *p=head;
	while(p!=NULL)
	{
		p=p->next;
	}
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->prev;
	}
	
}
int main()
{
	DLL D1;
	int s,ans,beg,end,pos,num,pos1;
	D1.create();
	D1.show();
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
	ans=D1.count();
	cout<<ans<<" node exist"<<endl;
	
	cout<<"\nEnter data to add at beg  = ";
	cin>>beg;
	D1.addatbeg(beg);
	D1.show();
	
	cout<<"\nEnter data to add at end = ";
	cin>>end;
	D1.addatend(end);
	D1.show();
	
	cout<<"\nEnter the pos to add node = ";
	cin>>pos;
	cout<<"\nEnter the num = ";
	cin>>num;
	D1.addbypos(pos,num);
	D1.show();
	
	D1.delatbeg();
	cout<<"\nAfter delete at beg = "<<endl;
	D1.show();
	
	D1.delatend();
	cout<<"\nAfter delete at end = "<<endl;
	D1.show();	
	
	cout<<"\nEnter the pos to delete node = ";
	cin>>pos1;
	D1.delatpos(pos1);
	cout<<"\nAfter del by pos = "<<endl;
	D1.show();
	
	cout<<"\nReverse list = "<<endl;
	D1.show_rev();
	D1.show();
 	return 0;
}

