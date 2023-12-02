#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		void getdata()
		{
			cout<<"Enter x and y = ";
			cin>>x>>y;
		}
		static void print(Number obj);
};
void Number::print(Number obj)
{
	cout<<obj.x<<" "<<obj.y<<endl;
	//cout<<"H";
}
int main()
{
	Number T1,T2;
	T1.getdata();
	T2.getdata();
	//print() is a static member function of class Number..
	//It works for class so no any calling object available.
	Number::print(T1);
	Number::print(T2);
	
 	return 0;
}

