#include <iostream>
using namespace std;

#define max 3
class Stack
{
    public:
        int data[max];
        int top;
    Stack()
    {
        top=-1;
    }
    void push(int x)
    {
        if(top==max-1)
        {
            cout<<"\ncan't push";
        }
        else
        {
            top++;
            data[top]=x;
        }
    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"array is empty";
            return 0;
        }
        else
        {
        	int x;
            x = data[top];
            top--;
            return x;
        }
    }
};
int main()
{
    Stack stk;
    int x,ans;
    cout<<"Enter the array = ";
    for(int i=0; i<max; i++)
    {
        cin>>x;
        stk.push(x);
    }
    for(int i=0; i<max; i++)
    {
        ans=stk.pop();
        cout<<"\nx = "<<ans;
    }
    //stk.push();


    return 0;
}
