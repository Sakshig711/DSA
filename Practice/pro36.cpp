#include<iostream>
#include<string.h>
using namespace std;

char * getstring()
{
	char *p,*q;
	p = new char[30];
	cout<<"\nEnter the string = ";
	cin.getline(p,30);
	int len = strlen(p);
	q = new char[len+1];
	strcpy(q,p);
	return q;
}

int main()
{
	char *r;
	r = getstring();
	int res = strlen(r);
	for(int i=0; i<res; i++)
	{
		cout<<*(r+i)<<endl;
	}

 	return 0;
}

