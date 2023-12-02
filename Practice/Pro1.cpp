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
	Node T1(10),T2(20),T3(30);
	T1.ptr=&T2;
	T2.ptr=&T3;
	T3.ptr=NULL;
	
	cout<<T1.data<<endl;
	cout<<T1.ptr->data<<endl;
	cout<<T1.ptr->ptr->data<<endl;
	
	
 	return 0;
}

