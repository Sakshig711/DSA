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
	Node *p,*q,*r;
	p = new Node(10);
	q = new Node(20); 
	r = new Node(30);
	p->next=q;
	q->next=r;
	cout<<p->data<<endl<<endl;
	
	cout<<q->data<<endl;
	cout<<p->next->data<<endl<<endl;
	
	cout<<r->data<<endl;
	cout<<q->next->data<<endl;
	cout<<p->next->next->data<<endl;


 	return 0;
}

