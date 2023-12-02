/*11.Scan a range from user.Print addition of only odd values in the range.*/
#include<iostream>
using namespace std;

int print(int a,int b)
{
	if(a>b)
	{
		return 0;
	}
	else
	{
		int res;
		if(a%2!=0)
		{
			
			res = print(a+1,b);
			return res+a;
		}	
		else
		{
			res = print(a+1,b);
		}
		
		
	}
}
int main()
{
	int a,b;
	cout<<"Enter the range = ";
	cin>>a>>b;
	int ans;
	if(a>b)
	{
		ans=print(b,a);
	}
	else
	{
		ans=print(a,b);
	}
	cout<<"\nAddition is = "<<ans;


 	return 0;
}

