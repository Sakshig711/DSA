/*25.Scan base and power from user in main().Define recursive function to find base raised to power.*/
#include<iostream>
using namespace std;

int recursive(int base,int power)
{
	int i=1;
	if(power==1)
	{
		return 0;
	}
	else
	{
		
		int res;
		res=recursive(base,power-1);
		return res + base*power;
	}
}
int main()
{
	int base,power;
	cout<<"Enter the base and power = ";
	cin>>base>>power;
	int ans;
	ans = recursive(base,power);
	cout<<ans;


 	return 0;
}

