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
	
	while(p->next!=NULL)
	{
		cout<<p->data;
		
		p=p->next;
	}


 	return 0;
}

