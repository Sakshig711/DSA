/*16.Create an array of n integers.Print addition of only even values in array.*/
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

int add(int *p,int n)
{
	if(n==-1)
	{
		return 0;
	}
	else
	{
		int res;
		if(*(p+n)%2==0)
		{
			res = add(p,n-1);
			return res+*(p+n);
		}
		res = add(p,n-1);
		
	}
}

int main()
{
	int n;
	cout<<"Enter the n = ";
	cin>>n;
	int arr[n],ans;
	scan(arr,n-1);
	ans = add(arr,n-1);
	cout<<"Add = "<<ans;
	

 	return 0;
}

