#include<iostream>
using namespace std;

class Time
{
	public:
		int hrs;
		int min;
	void getdata()
	{
		cout<<"Enter hrs then min = ";
		cin>>hrs>>min;
	}
	int total()
	{
		int temp;
		temp=hrs*60;
		min=min+temp;
		return min;
	}
};
int main()
{
	Time T1,T2;
	T1.getdata();
	T2.getdata();
	int total1,total2;
	total1 = T1.total();
	total2 = T2.total();
	cout<<"\nTotal1 = "<<total1;
	cout<<"\nTotal2 = "<<total2;

 	return 0;
}

