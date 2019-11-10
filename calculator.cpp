#include <iostream>
using namespace std;
int main()
{ float a,b,c;
  int n;
  cout<<"ENTER ANY NO (1 TO 4)\n1. SUM";
  cout<<"\n2.SUBTRACTION\n3.MULTIPLY\n4.DIVISION";
  cout<<endl;
  cin>>n;
  switch(n)
  {
  	case 1:cout<<"ENTER TWO NUMBERS :";
           cin>>a>>b;
           c=a+b;
           cout<<"SUM :"<<c;
           break;
   	case 2:cout<<"ENTER TWO NUMBERS :";
           cin>>a>>b;
           c=a-b;
           cout<<"SUBTRACTION :"<<c;
           break;
	case 3:cout<<"ENTER TWO NUMBERS :";
           cin>>a>>b;
           c=a*b;
           cout<<"MULTIPLY :"<<c;
           break;
	case 4:cout<<"ENTER TWO NUMBERS :";
           cin>>a>>b;
           c=a/b;
           cout<<"DIVISION :"<<c;
		   break;	
    default:
		   cout<<"WRONG CHOICE";		   	   	         
  }
	return 0;
}