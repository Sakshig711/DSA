#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {9,7,5,3,1};
	int start=0,x=6,end=5,mid;
    while(start<=end)
    {
      	mid=(start+end)/2;
        if(arr[mid]==x)
        {
            cout<<"found";
            break;
        }
        else if(x<arr[mid])
        {
            end=mid+1;
        }
        else if(x>arr[mid])
        {
            start=mid-1;
        }
    }
    if(end>start)
    {
    	cout<<"Not found";
	}
    return 0;
}
