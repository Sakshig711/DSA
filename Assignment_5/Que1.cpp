/*1.Print first n natural numbers.*/
#include<iostream>
using namespace std;

void myfun(int x)
{
	if(x==0)
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
	int n;
	cout<<"Enter the n = ";
	cin>>n;
	myfun(n);

 	return 0;
}

