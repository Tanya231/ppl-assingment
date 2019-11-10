#include <iostream>
using namespace std;
class student
{
  int rn;
  char name[20];	
  public:
	void input()
	{
		cout<<"ENTER STUDENT DETAIL\nENTER ROLL NO. : ";
		cin>>rn;
		cout<<"ENTER NAME :";
		cin>>name;
	}
	void show()
	{
		cout<<"STUDENT ROLL NO. : "<<rn;
		cout<<"\nSTUDENT NAME : "<<name;
	}
};
class person:public student 
{
   char br[5];
   char gender;
   public:
   	 void input()
		{
			student::input();
            cout<<"ENTER BRANCH : ";
		    cin>>br;
		   	cout<<"ENTER GENDER(M/F) :";
		    cin>>gender;
			
		}	
	 void show()
	   {
	  	     student::show();
	  	     cout<<"\nSTUDENT BRANCH : "<<br;
	  	     cout<<"\nSTUDENT GENDER : "<<gender;
	   }	
	
};
	
int main() 
{
  person  a;
  a.input();
  a.show();
  return 0;	
}