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
		int search(int srch);
		void addatbeg(int beg);
		void addatend(int end);
		void addatpos(int , int , int);
		void delatbeg();
		void delatend();
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

int SLL::search(int srch)
{
	Node *p=NULL;
	p=head;
	
	while(p!=NULL)
	{
		if(p->data==srch)
		{
			return 1;
		}
		p=p->next;
	}
	if(p==NULL)
	{
		return 0;
	}
}

void SLL::addatbeg(int beg)
{
	Node *p=NULL;
	p = new Node(beg);
	
	p->next=head;
	head=p;
	
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

void SLL::addatpos(int pos, int num,int res)
{
	if(pos<1 || pos>res+1)
	{
		return;
	}
	if(pos==1)
	{
		addatbeg(num);
	}
	else
	{
		Node *p=NULL;
		Node *q=NULL;
		q=head;
		for(int i=1; i<pos-1; i++)
		{
			q=q->next;
		}
		
		p = new Node(num);
		p->next=q->next;
		q->next=p;
	}
}

void SLL::delatbeg()
{
	
	if(head==NULL)
	{
		cout<<"\nEmpty list is there";
	}
	
	if(head->next==NULL)
	{
		delete head;
		head=NULL;
	}
	else
	{
		Node *p=NULL;
		p=head;
		head=head->next;
		delete p;
		//head=NULL;	
	}
}

void SLL::delatend()
{

		Node *q=NULL;
		Node *p=NULL;
		p=head;
		while(p!=NULL)
		{
			q=p;
			p=p->next;
		}
		q->next=NULL;
		delete p;
	
}

int main()
{
	SLL S1;
	S1.create();
	S1.show();
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
	
	int srch;
	cout<<"\nEnter the data for search  = ";
	cin>>srch;
	if(S1.search(srch)==1)
	{
		cout<<"Data is exist"<<endl;
	}
	else
	{
		cout<<"Data is not exist"<<endl;
	}
	
	int beg;
	cout<<"\nEnter the data to add at beg = ";
	cin>>beg;
	S1.addatbeg(beg);
	S1.show();
	
	int end;
	cout<<"\nEnter data to add at end = ";
	cin>>end;
	S1.addatend(end);
	S1.show();
	
	int pos;
	cout<<"\nEnter the pos to add Node = ";
	cin>>pos;
	int num;
	cout<<"Enter the data for that = ";
	cin>>num;
	S1.addatpos(pos,num,res);
	S1.show();
	
//	S1.delatbeg();
//	S1.delatend();
//	S1.show();
	
 	return 0;
}

