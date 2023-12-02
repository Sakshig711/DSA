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
	Node *p;
	p=new Node(10);
	p->next=new Node(20);
	p->next->next= new Node(30);
	
	cout<<p->data<<endl;
	p=p->next;
	cout<<p->data<<endl;
	p=p->next;
	cout<<p->data<<endl;
	
	


 	return 0;
}

