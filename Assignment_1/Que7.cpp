/*7.Scan 6 integers in an array.Define function addition() to find addition of all the integers.
Print result in main().*/
#include<iostream>
using namespace std;
int addition(int arr[]);
int main()
{
	int arr[6],res;
	cout<<"Enter the 6 elements = "<<endl;
	int i;
	for(i=0;i<6; i++)
	{
		cin>>arr[i];
	}
	res = addition (arr) ;
	cout<<res;
	
 	return 0;
}
int addition(int arr[])
{
	
	int res=0,i;
	for(i=0;i<6; i++)
	{
		res=res+arr[i];
	}
	return res;
	
}

