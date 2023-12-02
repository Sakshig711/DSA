/*6.Scan 7 characters in an array of characters.Count how many times 'A' is present in the array.*/
#include<iostream>
using namespace std;

int main()
{
	char arr[7];
	cout<<"Enter the 7 characters = "<<endl;
	int i;
	for(i=0; i<7; i++)
	{
		cin>>arr[i];
	}
	int cnt=0;
	for(i=0; i<7; i++)
	{
		if(arr[i]=='a')
		{
			cnt++;
		}
	}
	cout<<"A is present "<<cnt<<" times";
	


 	return 0;
}

