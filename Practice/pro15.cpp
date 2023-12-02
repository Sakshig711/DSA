#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		char str[30];
		
};
int main()
{	
	Student S1,S2;
	cout<<"Enter the name of student = ";
	cin.getline(S1.str,30);
	
	cout<<"Enter the another name of student = ";
	cin.getline(S2.str,30);
	
	if(strcmp(S1.str,S2.str)==0)
	{
		cout<<"Names are same";
	}
	else
	{
		cout<<"Names are different";
	}
	
 	return 0;
}

