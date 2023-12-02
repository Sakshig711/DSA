#include <iostream>
#include <string.h>
using namespace std;


struct Student
{
	int rollno;
	string name;
	float sgpa;
	
};
class SEIT
{
	struct Student S[3];
	
	public:

	void input()
	{
		for(int i=0; i<3; i++)
		{
			cout<<"\nEnter the name = ";
			cin>>S[i].name;
			for(int j=i; j>0; j--)
			{
				if(S[i].name == S[j-1].name)
				{
					cout<<"\nName is repeted enter valid name ";
					cout<<"\nEnter the name = ";
					cin>>S[i].name;
				}
			}
	
			cout<<"\nEnter the roll no = ";
			cin>>S[i].rollno;
			for(int j=i; j>0; j--)
			{
				if(S[i].rollno == S[j-1].rollno)
				{
					cout<<"\nrollno is repeted enter valid rollno ";
					cout<<"\nEnter the roll = ";
					cin>>S[i].rollno;
				}
			}
			
			cout<<"\nEnter the sgpa = ";
			cin>>S[i].sgpa;
			for(int j=i; j>0; j--)
			{
				if(S[i].sgpa == S[j-1].sgpa)
				{
					cout<<"\nsgpa is repeted enter valid sgpa ";
					cout<<"\nEnter the sgpa = ";
					cin>>S[i].sgpa;
				}
			}
			cout<<"\n";
			
		}
	}
	void display(int i)
	{
	
		cout<<"\n\nRoll no = "<<S[i].rollno;
		cout<<"\nName = "<<S[i].name;
		cout<<"\nSGPA = "<<S[i].sgpa;
		
			
	}	
	void display2()
	{
		for(int i=0; i<3; i++)
		{
			cout<<"\n\nRoll no = "<<S[i].rollno;
			cout<<"\nName = "<<S[i].name;
			cout<<"\nSGPA = "<<S[i].sgpa;
			cout<<endl;
			
		}	
			
	}
	
	void search()
	{
		int data;
		cout<<"Enter the sgpa to search a data = ";
		cin>>data;
		for(int i=0; i<5; i++)
		{
			if(S[i].sgpa==data)
			{
				display(i);
			}
		}
		
	}
	void bubble_sort()
	{
		int temp1,temp3;
		string temp2;
		
		for(int i=1; i<3; i++)
		{
			for(int j=0; j<3; j++)
			{
				if(S[i].rollno < S[j].rollno)
				{
					temp1=S[i].rollno;
					S[i].rollno=S[j].rollno;
					S[j].rollno=temp1;
					
					temp2=S[i].name;
					S[i].name=S[j].name;
					S[j].name=temp2;
					
					temp3=S[i].sgpa;
					S[i].sgpa=S[j].sgpa;
					S[j].sgpa=temp3;
				}
			}
		}
		display2();
	}

	void insertion()
	{
    	for (int i=1; i<3; i++) 
		{
        	int j = i;
        	int x,y;
        	while (j > 0) 
			{
                if(S[j - 1].name.compare(S[j].name)>0)
                {
                    string temp;
                	temp=S[j - 1].name;
                    S[j - 1].name=S[j].name;
                    S[j].name=temp;
                	
                	x=S[j-1].rollno;
					S[j-1].rollno=S[j].rollno;
					S[j].rollno=x;                	
                	
                	y=S[j-1].sgpa;
					S[j-1].sgpa=S[j].sgpa;
					S[j].sgpa=y;
                }
                j--;
        	}
    	}
	}

    void binary_search()
    {
        int up=2;
        int low=0;
        int mid,x;
        cout<<"\nEnter roll no to search = ";
        cin>>x;
        mid=up+(up-low)/2;
        while(low<=up)
        {
            if(S[mid].rollno==x)
            {
                cout<<"found";
                break;
            }
            if(x<S[mid].rollno)
            {
                up=mid-1;
                mid=up+(up-low)/2;
            }
            if(x>S[mid].rollno)
            {
                low=mid+1;
                mid=up+(up-low)/2;
            }

        }
        if(low>=up)
        {
            cout<<"not found";
        }
    }
	
};

int main()
{
	SEIT obj;
	obj.input();
	int choice;
	int x;
	do
	{
		cout<<"\n1:Display data\n2:search data\n3:sort data\n4:New input\n5:sort names\n6:binary search\nEnter your choise = ";
		cin>>choice;
		//Student S;
		switch(choice)
		{
			case 1:obj.display2();
				break;
				
			case 2:obj.search();
				break;
				
			case 3:obj.bubble_sort();
				break;
				
			case 4:obj.input();
				break;
				
			case 5:obj.insertion();
					obj.display2();
                break;

            case 6:obj.binary_search();
				break;
			
			default : cout<<"\nInvalid input";
		}
		cout<<"\nIf u want to repeat then press 1 = ";
		cin>>x;	
	}while(x==1);
	
	return 0;
}


