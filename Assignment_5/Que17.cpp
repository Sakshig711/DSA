/*17.Scan a string from user.Print each character of string using recursive function.*/
#include<iostream>
#include<string.h>
using namespace std;

void print(char *p,int n)
{
	if(n==-1)
	{
		return;
	}
	else
	{
		print(p,n-1);
		cout<<*(p+n)<<endl;
		
	}
}
int main()
{
	char str[30];
	cout<<"Enter the string = ";
	cin.getline(str,30);
	int len=strlen(str);
	//cout<<len;
	print(str,len-1);

 	return 0;
}

