#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node* ptr;
		Node(int a)
		{
			data=a;
			ptr=NULL;
		}
		~Node()
		{
			cout<<"NODE ENDS"<<endl;
		}
};
int main()
{
	Node *p;
	Node T1(1),T2(2),T3(3);
	
	p=&T1;
	T1.ptr=&T2;
	T2.ptr=&T3;
	T3.ptr=NULL;
	
	cout<<p->data<<endl;
	cout<<p->ptr->data<<endl;
	cout<<p->ptr->ptr->data<<endl;
	
	
	


 	return 0;
}

