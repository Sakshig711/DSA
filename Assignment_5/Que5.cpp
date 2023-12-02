/*5.Scan a range from user.Print only even numbers in the range.*/
#include<iostream>
using namespace std;

void print(int a,int b)
{
	if(a>b)
	{
		return ;
	}
	else
	{
		if(a%2==0)
		{
			cout<<a<<endl;
		}
		
		print(a+1,b);
	}
}
int main()
{
	int a,b;
	cout<<"Enter the range = ";
	cin>>a>>b;
	if(a>b)
	{
		print(b,a);
	}
	else
	{
		print(a,b);
	}


 	return 0;
}
