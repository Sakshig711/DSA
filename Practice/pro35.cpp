#include<iostream>
using namespace std;

struct student
{
	int rollno;
	string name;
	float cgpa;
};
class seit
{
	private:
		struct student s[5];
	public:
		void input()
		{
			int i,j;
			for(i=0;i<5;i++)
			{
				cout<<"ENTER ROLL NUMBER";
				cin>>s[i].rollno;
				if(s[i].rollno<0)
				{
					cout<<"INVALID INPUT";
					cout<<"RENETR";
					cin>>s[i].rollno;
       			}
				else
				{
					for(j=i;j>0;j--)
					{
						if(s[i].rollno==s[j-1].rollno)
						{
							cout<<"NUMBER IS REPEATED\n";
							cout<<"RENTER";
							cin>>s[i].rollno;}
						}
					}

					cout<<"ENTER NAME :\n";
					cin>>s[i].name;

					cout<<"ENTER CGPA: \n";
					cin>>s[i].cgpa;

				}
			}
		

		void display()
		{
			int i;
			for(i=0;i<5;i++)
			{
				cout<<s[i].rollno;
				cout<<"\t\t\t"<<s[i].name;
				cout<<"\t\t\t"<<s[i].cgpa<<"\n";
			}
		}
		void search()
		{
			float key;
			cout<<"ENTER CGPA VALUE TO CHECK WHETHER IS IS PRESENT OR NOT";
			cin>>key;
			int i;
			int cnt=0;
			for(i=0;i<=4;i++)
			{
				if(s[i].cgpa==key)
				{
					cout<<"IT IS PRESENT\n";
					cout<<"ROLLNO:"<<s[i].rollno<<"\n"<<"NAME:"<<s[i].name<<"\n"<<"CGPA:"<<s[i].cgpa<<"\n";
					cnt=cnt+1;
				}
			}
			if(cnt==0)
			{
				cout<<"IT IS NOT PRESENT\n";
				}

		}
		void bubblesort()
		{
			int i,j;
			struct student temp;
			for(i=1;i<5;i++)
			{
				for(j=0;j<=5-i-1;j++)
				{
					if(s[j].rollno>s[j+1].rollno)
					{
						temp.rollno=s[j].rollno;
						temp.name=s[j].name;
						temp.cgpa=s[j].cgpa;
						s[j].rollno=s[j+1].rollno;
						s[j].name=s[j+1].name;
						s[j].cgpa=s[j+1].cgpa;
						s[j+1].rollno=temp.rollno;
						s[j+1].name=temp.name;
						s[j+1].cgpa=temp.cgpa;

					}
				}

			}
			display();
		}

		int binarysearch(string key)
		{
			int l,h;
			int mid;
l=0;
h=4;
while(l<=h)
{
mid=(l+h)/2;
if(key.compare(s[mid].name)==0)
{
return mid;
}
if(key.compare(s[mid].name)>0)
{
h=mid -1;
}
else
{
l=mid+1;

}


}
return -1;

}
void insertion()
{
    int i,j;
    string x;
for(i=1;i<5;i++)
{
	j=i-1;
	x=s[i].name;

	while(j>=0  && s[j].name.compare(x)>0)
	{
	    s[j+1].rollno=s[j].rollno;
		s[j+1].name=s[j].name;
		s[j+1].cgpa=s[j].cgpa;
	
		j--;			

	}
		s[j+1].name=x;
}
}

int position(int low,int up)
{
	float pivot;
	pivot=s[low].cgpa;
	
	int i,j;
	i=low+1;
	j=up;
	while(i<=j)
	{
		while(s[i].cgpa>pivot)
		{
			i++;
		}
		while(s[j].cgpa<pivot)
		{
			j--;
		}
		if(i<j)
		{
			swap(s[i].cgpa,s[j].cgpa);
			swap(s[i].rollno,s[j].rollno);
			swap(s[i].name,s[j].name);
			
			
		}
		else
		{
			break;
		}

	}
	swap(s[j].cgpa,s[low].cgpa);
	swap(s[j].rollno,s[low].rollno);
	swap(s[j].name,s[low].name);
	
	return j;

}
	void quicksort(int l,int h)
	{
		int j;
		if(l<h)
		{
			j=position(l,h);
			position(l,j-1);
			position(j+1,h);
		}
	}

};

int main()
{
seit s1;
int choice ;
char c;
string k;
struct student temp;
do
{
cout<<"ENTER YOUR CHOICE 1:INPUT , 2:DISPLAY , 3: SEARCH 4:BUBBLESORT 5 :BINARYSEARCH 6:INSERTION 7:QUICKSORT";
cin>>choice;
switch (choice)
{
case 1 :
s1.input();


break;

case 2:
cout<<"\nINFORMATION OS STUDENT IS:\n";
cout<<"ROLL NO\t\t\tNAME\t\t\tCGPA\n";
s1.display();
break;

case 3 :
s1.search();
break;

case 4:
s1.bubblesort();
break;

case 5 :
cout<<"enter key value";
cin>>k;
int x;
x= s1.binarysearch(k);
if(x==-1)
{
cout<<"not found";
}
else
{
cout<<"found\n";
}
break;

case 6:
s1.insertion();
break;

case 7:
s1.quicksort(0,4);
break;

default : cout<<"invalid input";

}

cout<<"DO YOU WANT TO CONTINUE, IF YES THEN ENTER 'Y' OR 'y' OTHER WISE ENTER ANY OTHER INPUT";
cin>>c;
}while(c=='y' || c=='Y');


return 0;
}

