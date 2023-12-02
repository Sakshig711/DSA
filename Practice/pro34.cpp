#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    v.push_back(5);
    v.push_back(15);
    v.push_back(15);
    v.push_back(25);
	
//	char ch = 95;
    int len = v.size();
//    //cout<<len;
//        for(int i=0; i<len; i++)
//        {
//            for(int j=i+1; j<len; j++)
//            {
//                if(v[i]==v[j])
//                {
//                    v[j]=(char)ch;
//                }
//            }
//        }
        for(int i=0; i<len; i++)
        {
            cout<<v[i]<<endl;
        }

    
    return 0;
}
