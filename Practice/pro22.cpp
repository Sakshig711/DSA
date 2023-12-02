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
		DLL()
		{
			head=NULL;
		}
		void create();	
		void show();
		int count();
		int search(int);
};
void SLL::create()
{
	int n,x;
	Node *p=head; 
	cout<<"Enter how many nodes u want = ";
	cin>>n;
	if(n==0)
	{
		return;
	}
	cout<<"\nEnter data for 1st node = ";
	cin>>x;
	head = new Node(x);
	p=head;
	for(int i=1; i<n; i++)
	{
		cout<<"Enter data for next node = ";
		cin>>x;
		p->next = new Node(x);
		p=p->next;
	}
	//p->next=p;
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
	int cnt=0;
	Node*p = head;
	while(p!=NULL)
	{
		cnt++;
		p=p->next;
	}
	return cnt;
	
}
int SLL::search(int num)
{
	Node*p = head;
	while(p!=NULL)
	{
		if(num==p->data)
		{
			return 1;
			break;
		}
		p=p->next;
	}
	return 0;
}
int main()
{
	SLL T1;
	int ans1,ans2;
	T1.create();
	T1.show();
	ans1 = T1.count();
	cout<<"There are "<<ans1<<" Nodes"<<endl;
	int num;
	cout<<"Enter a number to search = ";
	cin>>num;
	ans2 = T1.search(num);
	if(ans2==1)
	{
		cout<<"Data exist"<<endl;
	}
	else
	{
		cout<<"Data does not exist"<<endl;
	}
	
	
 	return 0;
}

