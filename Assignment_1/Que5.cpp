/*45.Scan necessary details in main() to find simple interest.Define function interest() to find simple interest.
(use call by value)*/
#include<iostream>
using namespace std;
void interest(int pvalue,int time, int rate);
int main()
{
	int pvalue,time,rate;
	cout<<"Enter the principle value = ";
	cin>>pvalue;
	cout<<"\nEnter ur rate = ";
	cin>>rate;
	cout<<"\nEnter the timr in hr = ";
	cin>>time;
	interest(pvalue,time,rate);


 	return 0;
}
void interest(int pvalue,int time, int rate)
{
	cout<<"The simple interest is = "<<(pvalue*time*rate)/100;
}

