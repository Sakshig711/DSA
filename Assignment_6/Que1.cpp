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
class CLL
{
	private:
		Node *front;
		Node *rear;
	public:
		CLL()
		{
			front=NULL;
			rear=NULL;
		}
//		Node* gethead()
//		{
//			return head;
//		}
		void create();
		void show();
		int count();
		void addatbeg(int );
		void addatend(int );
		void addatpos(int pos,int num,int cnt);
		int search(int );
		void delatbeg();
};
void CLL::create()
{
	int n,x;
	cout<<"Enter how many nodes u want = ";
	cin>>n;
	cout<<"Enter the value for next node = ";
	cin>>x;
	
	front = new Node(x);
	rear=front;
	rear->next=front;
	
	Node *p;
	p=front;
	for(int i=1; i<n; i++)
	{
		cout<<"Enter the data for next node = ";
		cin>>x;
		p->next = new Node(x);
		p=p->next;
	}
	p->next=front;
	rear=p;
}
void CLL::show()
{
	
	if(front==NULL)
	{
		cout<<"Empty list";
	}
	else
	{
		Node *p=front;
		do
		{	
			cout<<p->data<<endl;
			p=p->next;
			
		}while(p!=front);
	}
}
int CLL::count()
{
	Node* p=front;
		int count=0;
	if(front==NULL)
	{
		return 0;
	}
	else
	{
	
		do
		{	
			//cout<<p->data<<endl;
			p=p->next;
			count++;
			
		}while(p!=front);
	}
	return count;
}
void CLL::addatbeg(int x)
{
	Node *p=front;
	p = new Node(x);
	if(front==NULL)
	{
		front=rear;
		rear->next=front;
	}
	else
	{
		p->next=front;
		front=p;
		rear->next=front;
	}
	
}
void CLL::addatend(int end)
{
	Node *p=front;
	p = new Node(end);
	if(front==NULL)
	{
		front=rear;
		rear->next=front;
	}
	else
	{
		p->next=front;
		rear->next=p;
		rear=p;
	}
}
void CLL::addatpos(int pos,int num,int cnt)
{
	Node *p=front;
	Node *q;
	q = new Node(num);
	if(pos<1 || pos>cnt+1)
	{
		cout<<"\nInvalid";
	}
	for(int i=1; i<pos-1; i++)
	{
		p=p->next;
	}
	if(pos==1)
	{
		addatbeg(num);
	}
	if(pos==cnt+1)
	{
		addatend(num);
	}
	else
	{
		q->next=p->next;
		p->next=q;
		//rear = q;	
	}
	
}
int CLL::search(int s)
{
	Node *p=front;
	if(front==NULL)
	{
		cout<<"Invalid";
	}
	else
	{
		do
		{
			if(p->data==s)
			{
				return 1;
				p=p->next;
			}
		}while(p!=front);
	}
	return 0;
}
void CLL::delatbeg()
{
	if(front==NULL)
	{
		cout<<"invalid";
	}
	if(front==rear)
	{
		delete front;
		front=rear=NULL;
	}
	else
	{
		Node *p=front;
		front=front->next;
		rear->next=front;
		delete p;
	}
}
int main()
{
	CLL C1;
	C1.create();
	C1.show();
	int cnt;
	cnt=C1.count();
	cout<<"\n"<<cnt<<" nodes are present";
	int x;
	cout<<"\nEnter the data to add at beg = ";
	cin>>x;
	C1.addatbeg(x);
	C1.show();
	int end;
	cout<<"\nEnter the data to add at end = ";
	cin>>end;
	C1.addatend(end);
	C1.show();
	int pos,num;
	cout<<"\nEnter the pod to add data = ";
	cin>>pos;
	cout<<"\nEnter number to add = ";
	cin>>num;
	C1.addatpos(pos,num,cnt);
	C1.show();
	int num2;
	cout<<"\nEnter data to search = ";
	cin>>num2;
	if(C1.search(num2)==1)
	{
		cout<<"\nData found";
	}
	else
	{
		cout<<"Data not found"<<endl;
	}
	C1.delatbeg();
	C1.show();
 	return 0;
}

