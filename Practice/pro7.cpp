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
	Node T1(10),T2(20),T3(30);
	p = &T1;
	T1.next = &T2;
	T2.next = &T3;
	
	cout<<p->data<<endl;
	cout<<p->next->data<<endl;
	cout<<p->next->next->data<<endl;


 	return 0;
}

