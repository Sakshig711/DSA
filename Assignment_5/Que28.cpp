/*4.Keep scanning a number from user.If number is positive,add it to
linked list of positive numbers.If number is negative, add it to list of
negative numbers. Stop scanning number when user enters 0.Print
total number of positive & negative numbers. Find the smallest
number from negative linked list and largest from positive linked list.*/
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
class SLL
{
	public:
		Node* head;
		SLL()
		{
			head=NULL;
		}
		//void scan();
		void scan(SLL Neg, SLL Pos);
		void show();
		void addatend(int end);
		
};
void SLL::addatend(int end)
{
	
	Node *q = new Node(end);
	if(head == NULL)
	{
		head = q;
		return;
	}
	Node *p=NULL;
	p=head;
	while(p->next != NULL)
	{
		p=p->next;
	}
	p->next=q;
	
}
void SLL::scan(SLL Neg, SLL Pos)
{
	int x;
	while(1)
	{
		cout<<"\nEnter the data & 0 to terminate = ";
		cin>>x;
		if(x>0)
		{
			Pos.addatend(x);
		}
		else if(x==0)
		{
			return;
		}
		else
		{
			Neg.addatend(x);
		}
	}
}
void SLL::show()
{
	Node *p=NULL;
	p=head;
	
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
}
int main()
{
	SLL Neg,Pos,Temp;
	Temp.scan(Neg,Pos);
	Neg.show();
	Pos.show();
	
	


 	return 0;
}

