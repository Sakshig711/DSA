/*
Create a database of 6 students containing name,age and hometown.
Scan a name from user.Search all students of given name.If found,print their details.
Do not define any member function.Write whole code in main().
*/
#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		char name[30];
		int age;
		char hometown[30];
};

int main()
{
	Student std[6];
	int i;
	for(i=0; i<6; i++)
	{
		cout<<"\nEnter the name of the student = ";
		cin.getline(std[i].name,30);
		cout<<"\nEnter the age = ";
		cin>>std[i].age;
		cin.ignore(1);
		cout<<"\nEnter hometown = ";
		cin.getline(std[i].hometown, 30);
	}
	char str[30];
	cout<<"Enter the name u want to search = ";
	cin.getline(str,30);
	for(i=0; i<6; i++)
	{
		if(strcmp(std[i].name,str)==0)
		{
			cout<<"Student details = "<<endl;
			cout<<std[i].age<<endl;
			cout<<std[i].hometown<<endl;
		}
	}
	


 	return 0;
}

