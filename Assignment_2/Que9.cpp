#include<iostream>
using namespace std;

class Student
{
	private:
		char name[30];
		int age;
	public:
		void scan()
		{
			cout<<"Enter the name = ";
			cin.getline(name,30);
			cout<<"Enter the age = ";
			cin>>age;
			cin.ignore(1);
		}
		void print()
		{
			cout<<name<<endl;
			cout<<age<<endl;
		}
};
int main()
{
	Student S1,S2;
	S1.scan();
	S2.scan();
	S1.print();
	S2.print();
	return 0;
}

