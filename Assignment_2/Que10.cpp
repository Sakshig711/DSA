#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
	public:
		static Number getdata();
		void print()
		{
			cout<<x<<" "<<y<<endl;
		}
};
Number Number::getdata()
{
	Number obj;
	cout<<"Enter the x and y = ";
	cin>>obj.x>>obj.y;
	return obj;
}
int main()
{
	Number T1,T2;
	//static member function getdata().
	//getdata() function is returning an object.
	T1 = Number::getdata();
	T2 = Number::getdata();
	T1.print();
	T2.print();

 	return 0;
}

