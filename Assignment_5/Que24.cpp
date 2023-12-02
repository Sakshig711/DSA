/*24.Write a recursive program to check if given number is prime or not.*/
#include<iostream>
using namespace std;

int prime(int num)
{
	int n=2;
	if(n==num)
	{
		return 0;
	}
	else
	{
		int res;
		
		for(int i=2; i<num; i++)
		{
			if(num%i==0)
			{
				return 0;
			}
		}
		return 1;
		res = prime(num);
	}
	
}
int main()
{
	int num;
	cout<<"Enter the number = ";
	cin>>num;
	if(prime(num)==1)
	{
		cout<<"Prime";
	}
	else
	{
		cout<<"Not prime";
	}
	

 	return 0;
}

