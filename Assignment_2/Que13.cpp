#include<iostream>
using namespace std;

int main()
{
	int * p;
	p = new int[3];
	for(int i=0; i<3; i++)
	{
		cout<<"Enter data = ";
		cin>>*(p+i);
	}
	for(int i=0; i<3; i++)
	{
		cout<<" "<<*(p+i);
	}

 	return 0;
}

