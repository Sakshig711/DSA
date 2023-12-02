/*12.Declare and initialize an array of 6 integers.Print this array using recursive function.*/
#include<iostream>
using namespace std;


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
	print(arr,5);


 	return 0;
}

