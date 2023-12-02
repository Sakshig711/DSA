/*9.Find n factorial.*/
#include<iostream>
using namespace std;

int fact(int x)
{
	if(x==0)
	{
		return 1;
	}
	else
	{
		int res=1;
		res = fact(x-1);
		return res*x;
	}
}
int main()
{
	int n,ans;
	cout<<"Enter the n = ";
	cin>>n;
	ans = fact(n);
	cout<<"\nFactorial is = "<<ans;

 	return 0;
}

