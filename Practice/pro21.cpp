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
	Node T1(10),T2(20);
	T1.next=&T2;
	T2.next=&T1;
	cout<<T1.next->data;
	cout<<T2.next->data;
	

 	return 0;
}

