/*15.Declare an array of 6 integers.Print addition of all integers in array.*/
#include<iostream>
using namespace std;
int add(int *p,int n)
{
	if(n==-1)
	{
		return 0;
	}
	else
	{
		int res;
		res = add(p,n-1);
		return res+*(p+n);
	}
}
int main()
{
	int arr[6]={3,56,34,8,4,3};
	int ans;
	//cout<<"Enter 6 integers = ";
	ans = add(arr,5);
	cout<<ans;
	

 	return 0;
}

