/*7.Print addition of 1 to 5 numbers.*/
#include<iostream>
using namespace std;

int add(int x)
{
	if(x==0)
	{
		return 0;
	}
	else
	{
		int res=0;
		res=add(x-1);
		return res+x;
	}
}
int main()
{
	int ans,n;
	cout<<"Enter the n = ";
	cin>>n;
	ans = add(n);
	cout<<"Addition is = "<<ans;
	

 	return 0;
}

