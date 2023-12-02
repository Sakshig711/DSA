#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
	public:
		void scan()
		{
			cout<<"Enter the x and y = ";
			cin>>x>>y;
		}
		void show()
		{
			cout<<"The x and y are = "<<x<<" "<<y;
		}
		
};
int main()
{
	Number *p;
	p = new Number();
	p->scan();
	p->show();

 	return 0;
}

