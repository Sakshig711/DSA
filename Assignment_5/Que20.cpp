/*20.Scan a string from user.Count how many times 'a' or 'A' is present in the string.*/
#include<iostream>
#include<string.h>
using namespace std;

int count(char *str)
{
	if(*str!='\0')
	{
		return 0;
	}
	else
	{
		int res;
		res = count(str+1);
		if(*str=='a'|| *str=='A')
		{
			res = res+1;
		}
		return res;
	}
}
int main()
{
	char str[30];
	int ans;
	cout<<"Enter the string = ";
	cin.getline(str,30);
	int len;
	//len=strlen(str);
	ans = count(str);
	cout<<ans;
	


 	return 0;
}

