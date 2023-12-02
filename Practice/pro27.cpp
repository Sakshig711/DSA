#include<iostream>
using namespace std;

void myfun(int a,int b)
{
    if(a>b)
    {
        return;
    }
    else
    {
        cout<<a<<endl;
        myfun(a+1,b);
    }
}
int main()
{
    int a,b;
    cout<<"Enter the range = ";
    cin>>a>>b;
    if(a>b)
    {
        myfun(b,a);
    }
    else
    {
        myfun(a,b);
    }


 	return 0;
}

