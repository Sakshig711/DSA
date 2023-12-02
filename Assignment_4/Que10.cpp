/*Q3.Scan array of n integers from user in an array.Scan a number from user.
Search this number in array,if found,delete it.*/
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"how many elements u want in array = ";
	cin>>n;
	int arr[n];
	cout<<"Enter the array = ";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int x;
	cout<<"Enter the number u want to search in array = ";
	cin>>x;
	int i;
	for(i=0; i<n; i++)
	{
		if(arr[i]==x)
		{
			int j;
			for(j=i; j<n; j++)
			{
				arr[i]=arr[i+1];
				i++;
			}
			arr[i]=0;
		}
	}
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<endl;
	}
	
	


 	return 0;
}

