#include <iostream>
using namespace std;

void downadjust(int *num, int i)
{
    while(2*i<=num[0])
    {
        int j=2*i;
        if(j+1<num[0] && num[j]<num[j+1])
        {
            j=j+1;
        }
        if(num[i]<num[j])
        {
            int temp;
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
            i=j;
        }
        else
        {
            break;
        }
    }
}
void printarray(int *num)
{
    for(int i=1; i<num[0]+1; i++)
    {
        cout<<num[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter how many elements u want = ";
    cin>>n;
    int *num;
    num = new int[n+1];
    num[0]=n;
    cout<<"\nEnter the elements = ";
    for(int i=1; i<n+1; i++)
    {
    	cin>>num[i];
	}
    int k;
    for(k=num[0]/2; k>0; k--)
    {
        downadjust(num,k);   
    }
    
    while(num[0]>1)
    {
        int temp1;
        int last=num[0];
        temp1=num[last];
        num[last]=num[1];
        num[1]=temp1;
        downadjust(num,1);
       	num[0]--;
        //cout<<"rtcvtfvd"<<" ";
    }
    num[0]=n;
    printarray(&num[0]);
    
    return 0;
}

