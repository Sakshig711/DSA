/*4.Scan radius of a circle in main().Define functions to find area and circumference of circle.
Print both results in main().(use call by value)*/
#include<iostream>
using namespace std;
int circumference(int rad);
int area(int rad);
int main()
{
	int rad;
	cout<<"Enter the radius = ";
	cin>>rad;
	int ans1,ans2;
	ans1=area(rad);
	ans2=circumference(rad);
	cout<<"\nThe area is = "<<ans1;
	cout<<"\nThe circumference is = "<<ans2;


 	return 0;
}
int area(int rad)
{
	return 3.14*rad*rad;
}
int circumference(int rad)
{
	return 2*3.14*rad;
}

