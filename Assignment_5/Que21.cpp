/*21.Scan a string from user.Replace every occurrence of space by '?'.*/
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[30];
	int ans;
	cout<<"Enter the string = ";
	cin.getline(str,30);
	ans = strlen(str);
	for(int i=ans; i>0; i--)
	{
		if(*(str+i)==32)
		{
			*(str+i)='?';
		}
	}
	cout<<str;


 	return 0;
}

