/*3
44
555
6666
555
44
3*/
#include <iostream>
using namespace std;

int main()
{
    int a=3,b;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<a;
            
        }
        cout<<"\n";
        a++;
    }
    b=5;
    for(int i=3; i>0; i--)
    {
        for(int j=0; j>i; j++)
        {
            cout<<b;
        }
        cout<<"\n";
        b--;
        
    }

    return 0;
}
