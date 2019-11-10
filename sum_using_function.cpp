#include <iostream>
using namespace std;

void sum(int a,int b)
{
	int c;
	c=a+b;
	cout<<"SUM = "<<c;
}
int main()
{
	int a,b;
	cout<<"ENTER FIRST NO . :";
	cin>>a;
	cout<<"ENTER SECOND NO. :";
	cin>>b;
	sum(a,b);
	return 0;
}