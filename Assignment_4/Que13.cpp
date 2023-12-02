/*
Implement following functions.
-create()
-show()
-count()
-searchbyage()
-searchbyname()
-addatbeg()
-addatend()
-delatbeg()
-delatend()*/
#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		char name[30];
		int age;
		Student * next;
		Student()
		{
			strcmp(name,'\0');
			age=0;
			next=NULL;
		}
		Student(char *p,int a)
		{
			strcpy(name,p);
			age=a;
			next=NULL;
		}
};

class SLL
{
	public:
	Student* head;
	void create();
};

void SLL::create()
{
	int n,umr;
	char str[30];
	cout<<"Enter how many nodes u want = ";
	cin>>n;
	Student *p=NULL;
	cin.ignore(1);
	cout<<"Enter the string u want to store in 1st node = "<<endl;
	cin.getline(str,30);
	p = new Student(str,19);
	cout<<"Enter age = ";
	cin.ignore(1);
	cin>>umr;
	head=p;
	for(int i=1; i<n; i++)
	{
		cout<<"Enter data for next node = "<<endl;
		cin.getline(str,30);
		//cin.ignore(1);
		p->next = new Student(str,19);
		cout<<"Enter age = ";
		cin>>umr;
		cin.ignore(1);
		p=p->next;
	}
	
}

int main()
{
	SLL S1;
	S1.create();
	


 	return 0;
}

