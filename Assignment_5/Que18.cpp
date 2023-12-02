/*18.Write recursive copy() function to copy one int array in another int array*/
#include<iostream>
using namespace std;

void copy(int *s,int *t,int n)
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
	int source[4]={2,8,5,8};
	int target[4];
	copy(source,target,3);
	for(int i=0; i<4; i++)
	{
		cout<<target[i]<<" ";
	}
 	return 0;
}

