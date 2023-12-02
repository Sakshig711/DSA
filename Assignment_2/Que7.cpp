#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		void scan(Number &temp)
		{
			cout<<"Enter x and y = ";
			cin>>temp.x>>temp.y;
		}
		void print(Number obj)
		{
			cout<<obj.x<<" "<<obj.y;
		}
		
};
int main()
{
	Number T1,T2;
	T1.scan(T2);
	T1.print(T2);


 	return 0;
}

