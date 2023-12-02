#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *ptr;
		Node()
		{
			data=0;
			ptr=NULL;			
		}
		Node(int a)
		{
			data=a;
			ptr=NULL;
		}	
};
int main()
{
	Node *p,*q,*r;
	p = new Node(10);
	q = new Node(20);
	r = new Node(30);
	
	p->ptr=&q;
	q->ptr=&r;
	r->ptr=NULL;

	
	cout<<p->data<<endl;
//	cout<<T1.ptr->data<<endl;
//	cout<<T1.ptr->ptr->data<<endl;
	
	
 	return 0;
}

