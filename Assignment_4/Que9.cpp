#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[100] = "I am learning DataStructure";
    char* p = str;
    //Consider base address is 5680
    //No need to write hexadecimal address.
    //Write integer only when u think it prints address.
    cout << endl << "p+1 = " << p + 1;//5680
    cout << endl << "*(p + 1) = " << *(p + 1);//am lerning data structure
    cout << endl << "(p + 4)" << p + 4;//lerning data structure
    cout << endl << (long long)(p + 5);//5685
    p = p + 3;
    cout << endl << "p = " << p;//m lerning data structure
    cout << endl << (long long)(p + 2);//5685
    cout << endl << str + 4;//rning data structure
    cout << *(str + 4);//lerning data structure
    p++;
    ++p;
    cout << endl << p + 0;//lerning data structure
    cout << endl << strlen(p);//22
}

