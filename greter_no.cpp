#include <iostream>
using namespace std;

// program for finding greater number in three number.
// main() function 
int main()
{
	float a,b,c;                   //variables
	cout<<"ENTER THREE NO. \n\n";
	cout<<"\nENTER FIRST NO. :";
	cin>>a;
	cout<<"ENTER SECOND NO. :";
	cin>>b;
	cout<<"ENTER THIRD NO. :";
	cin>>c;
	if(a>b)                       // logic using if-else
	{
		if(a>c)
			
			{
				cout<<"GRETEST NO. :"<<a;
			}
        else
		    {     
                cout<<"GREETST NO. :"<<c;
		    }
		
	}
	else
	{
          if(b>c)
			
			{
				cout<<"GRETEST NO. :"<<b;
			}
		   else
		   {
				cout<<"GRETEST NO. :"<<c;
		   }	
	}
	return 0;
}