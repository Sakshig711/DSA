/*19.Define recursive copy() function to copy one string into another string.*/
#include<iostream>
using namespace std;

void copy(char *s,char *t,int n)
{
	if(n==-1)
	{
		return;
	}
	else
	{
		*(t+n)=*(s+n);
		copy(s,t,n-1);
	}
}
int main()
{
	char source[30]="Sakshi";
	char target[30];
	copy(source,target,6);
	cout<<target<<endl;
 	return 0;
}


