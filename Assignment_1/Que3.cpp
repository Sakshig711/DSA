/*3.Scan length and width of a rectangle.Define functions to find area and perimeter of rectangle.
Print both results in main().(use call by value)*/
#include<iostream>
using namespace std;
int perimeter(int len,int wid);
int area(int len,int wid);
int main()
{
	int len,wid;
	cout<<"\nEnter the length = ";
	cin>>len;
	cout<<"Enter the width = ";
	cin>>wid;
	int ans1,ans2;
	ans1=area(len,wid);
	ans2=perimeter(len,wid);
	cout<<"\nThe area is = "<<ans1;
	cout<<"\nThe perimeter is = "<<ans2;


 	return 0;
}
int perimeter(int len,int wid)
{
	return 2*(len+wid);
}
int area(int len,int wid)
{
	return len*wid;
}
