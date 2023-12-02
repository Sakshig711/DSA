/*1.Scan 10 integers from user in an array of integers.
Find the largest element.(using [])
*/
#include<iostream>
using namespace std;

int main()
{
	int arr[10];
	int i;
	cout<<"Enter the 10 elements = "<<endl;
	for(i=0; i<10; i++)
	{
		cin>>arr[i];
	}
	int max=arr[0];
	for(i=1; i<10; i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	cout<<"\nlargest no is "<<max;



 	return 0;
}

