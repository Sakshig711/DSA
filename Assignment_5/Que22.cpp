/*22.WAP to check if given string is pallindrome or not.(non-recursive)*/
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char *str;
	int len;
	cout<<"Enter the string = ";
	str = new char[30];
	cin.getline(str,30);
    len = strlen(str);
	char str2[30];
	int i;
	for(i=0; i<len; i++)
	{
		*(str2+i)=*(str+(len-i));
	}
	//cout<<len;
	int cnt=0;
	*(str2+i)='\0';
	//cout<<str<<endl;
	cout<<str2<<endl;
	
	
	if(strcmp(str,str2)==0)
	{
		cout<<"Pallindrome";
	}
	else
	{
		cout<<"Non pallindrome";
	}


 	return 0;
}

