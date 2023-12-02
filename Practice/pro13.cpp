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
int main()
{
	Node *p=NULL;
	Node *head=NULL;
	int n,x;
	cout<<"Enter how many nodes u want = ";
	cin>>n;
	
	cout<<"Enter the data for 1st node = ";
	cin>>x;
	
	head = new Node(x);
	p=head;
	
	for(int i=1; i<n; i++)
	{
		cout<<"Enter the data for next node = ";
		cin>>x;
		p->next = new Node(x);
		p = p->next;
	}
	int sum=0,cnt=0;
	p=head;
	while(p!=NULL)
	{
		if(p->data==15)
		{
			cnt++;
		}
		p=p->next;
	}
	cout<<"\nThe 15 exists "<<cnt<<" times";

 	return 0;
}

