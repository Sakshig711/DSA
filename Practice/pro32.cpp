#include<bits/stdc++.h>
using namespace std;



int main()
{
	vector<int>v;
	v.push_back(2);
	v.push_back(23);
	v.push_back(6);
	v.push_back(7);
	vector<int>::iterator p =v.end();
	pair<int,int>pr;
	//cout<<v.back()<<endl;
	v.erase(v.begin()+1,v.begin()+2);
	//cout<<*(p+0)<<endl;
	
	
	for(int i=0; i<4; i++)
	{
		cout<<v[i]<<" ";
	}
	


//	vector<pair<int,int> > vec;
//	vec.push_back(make_pair(12,15));
//	vec.push_back(make_pair(10,25));
//	vec.push_back(make_pair(12,75));
//	
//	int sum = vec[0].first + vec[0].second;
//	cout<<sum;
	return 0;
}

