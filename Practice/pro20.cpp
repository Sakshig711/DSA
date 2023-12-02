#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node()
    {
        data=0;
        next=NULL;
    }
    Node(int a)
    {
        data=0;
        next=NULL;
    }
};

int main()
{
    Node T1(7),T2(11);
    Node *p=&T1;
    T1.next=&T2;
    cout<<T1.next->data;
    
    return 0;
}

