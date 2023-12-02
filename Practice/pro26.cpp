#include<iostream>
using namespace std;

#define max 3
class Stack
{
	public:
		int data[max];
		int top;
		
		Stack()
		{
			top=-1;
		}
		void push(int);
		int pop();
		int empty()
		{
			if(top==-1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		int full()
		{
			if(top==max-1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};
void Stack::push(int x)
{
	if(full())
	{
		cout<<"\nstack is full";
	}
	else
	{
		top++;
		data[top]=x;
	}
}
int Stack::pop()
{
	int a;
	if(empty())
	{
		cout<<"\nStack is empty";
	}
	else
	{
		a = data[top];
		top--;
		return a;
	}
}
int main()
{
	Stack stk;
	int i,x;
	for(i=0; i<max; i++)
	{
		cout<<"\nEnter the data = ";
		cin>>x;
		stk.push(x);
	}
	for(i=max; i>0; i--)
	{
		x = stk.pop();
		cout<<"\nx = "<<x;
	}
	
	


 	return 0;
}

