#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		Number scan()
		{
			Number temp;
			cout<<"Enter x and y = ";
			cin>>temp.x>>temp.y;
			return temp;
		}
		void print()
		{
			cout<<x<<" "<<y;
		}
		void print(Number temp);
};
void Number::print(Number temp)
{
	cout<<temp.x<<" "<<temp.y;
	
}
int main()
{
	Number T1,T2;
	T1 = scan();
	T2 = scan();
	print(T1);
	T2.print();

 	return 0;
}

