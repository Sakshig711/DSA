/*8.Scan 8 integers from user in an array.Sort them in ascending order.*/
#include<iostream>
using namespace std;

int main()
{
	int arr[8];
	int i;
	cout<<"Enter the 8 elements = ";
	for(i=0; i<8; i++)
	{
		cin>>arr[i];
	}
	int temp;
	for(i=0; i<8;i++)
	{
		int j;
		for(j=i+1; j<8; j++)
		{
			
			if(arr[j]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"\n\n";
	for(i=0; i<8;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	

 	return 0;
}

