/*1.Print first n natural numbers.*/
#include<iostream>
using namespace std;

void myfun(int x)
{
	if(x==19)
	{
		return ;
	}
	else
	{
		myfun(x-1);
		cout<<x<<endl;
	}
}
int main()
{
	myfun(30);

 	return 0;
}

