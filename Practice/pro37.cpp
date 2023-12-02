#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2,4,6,7,9};
    int start=0;
    int x=9;
    int len = sizeof(arr)/sizeof(arr[0]);
    //cout<<len;
    int end=4;
    while(start<end)
    {
      	int mid=(start+end)/2;
        if(arr[mid]==x)
        {
            cout<<"found";
            break;
        }
        else if(x<arr[mid])
        {
            end=mid-1;
        }
        else if(x>arr[mid])
        {
            start=mid+1;
        }
        
    }
    if(start>end)
    {
    	cout<<"not found";
	}
    return 0;
}
