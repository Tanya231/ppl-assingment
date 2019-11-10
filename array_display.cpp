#include <iostream>
using namespace std;
int main() 
{
	int a[100],n;
	cout<<"ENTER NO OF ELEMENT :";
	cin>>n;
	cout<<"ENTER ELEMENT :\n";
	for(int i=0;i<n;i++)
	{
		cout<<"ENTER a["<<i<<"]= ";
		cin>>a[i];
	}
	cout<<"THE ELEMENT IN ARRAY :\n";
	for(int j=0;j<n;j++)
	{
		cout<<a[j]<<" ";
	}
	return 0;
}