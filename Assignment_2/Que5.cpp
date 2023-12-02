#include<iostream>
using namespace std;

class Number
{
	public:
		int x;
		void scan()
		{
			cout<<"enter x = ";
			cin>>x;
		}
		void print()
		{
			cout<<x<<endl;
		}
};
int main()
{
	Number T1,T2;
	T1.scan();
	T2.scan();
	T1.print();
	T2.print();

 	return 0;
}

