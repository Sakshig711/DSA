#include<iostream>
using namespace std;

int main()
{
	int arr[4] = {4,7,3,78};
	for(int i=0; i<4; i++)
	{
		int j=i;
		while(j>0 && arr[j-1]>arr[j])
		{
			int temp;
			temp=arr[j-1];
			arr[j-1]=arr[j];
			arr[j]=temp;
			j--;
		}
	}
	for(int i=0; i<4; i++)
	{
		cout<<arr[i]<<" ";
	}


 	return 0;
}

