#include<iostream>
using namespace std;


void print(int *p, int n)
{
	if(n<0)
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
	int arr[4] = {3,6,4,7};
	print(arr,3);


 	return 0;
}

