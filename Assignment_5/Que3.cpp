/*3.Print all integers from 10 to 20 in reverse order
for following main() function.
	int main()
	{
		print(20);
	}*/
#include<iostream>
using namespace std;

void print(int x)
{
	if(x==31)
	{
		return ;
	}
	else
	{
		print(x+1);
		cout<<x<<endl;
	}
}

int main()
{
	print(20);
	
 	return 0;
}

