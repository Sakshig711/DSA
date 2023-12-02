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
	int sum=0;
	p=head;
	while(p!=NULL)
	{
		sum=sum+p->data;
		p=p->next;
	}
	cout<<"\nThe sum of data is = "<<sum;

 	return 0;
}

