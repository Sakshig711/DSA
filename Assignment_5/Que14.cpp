/*14.Scan n integers from user in an array.Print this array in reverse order.
Define recursive scan() and print() functions here.*/
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
void recursive(int *p,int n)
{
	if(n==-1)
	{
		return;
	}
	else
	{
		cout<<*(p+n)<<endl;
		recursive(p,n-1);
	}
}

int main()
{
	int arr[6]={3,56,34,8,4,3};
	cout<<"Enter 6 integers = ";
	scan(arr,5);
	cout<<endl;
	recursive(arr,5);


 	return 0;
}

