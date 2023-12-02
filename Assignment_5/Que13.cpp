/*13.Declare an array of 6 integers.Scan and print this array using recursive scan()
and print() function.*/
#include<iostream>
using namespace std;

void scan(int *p,int n)
{
	if(n==-1)
	{
		return;
	}
	else
	{
		scan(p,n-1);
		cin>>*(p+n);
	}
}
void print(int *p,int n)
{
	if(n==-1)
	{
		return;
	}
	else
	{
		print(p,n-1);
		cout<<*(p+n)<<endl;
	}
}

int main()
{
	int arr[6]={3,56,34,8,4,3};
	cout<<"Enter 6 integers = ";
	scan(arr,5);
	cout<<endl;
	print(arr,5);


 	return 0;
}

