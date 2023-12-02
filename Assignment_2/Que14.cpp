/*
For above class Number,create 2 runtime objects.
Scan their data in main() only.
Print squares of x and y of both objects in main().
Do not define any member function in class Number.*/
#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		friend int main();
};

int main()
{
	Number *T1;
	T1 = new Number();
	cout<<"Enter x and y = ";
	cin>>T1->x>>T1->y;
	cout<<(T1->x)*(T1->x)<<endl;
	cout<<(T1->y)*(T1->y);
	
	


 	return 0;
}

