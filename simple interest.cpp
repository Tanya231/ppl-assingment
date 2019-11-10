#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    float p,r,t, si=0 ;
    cout<<"Enter the Principal amount:"<<endl;
    cin>>p;
    cout<<"Enter the rate percentage"<<endl;
    cin>>r;
    cout<<"Enter the time(in years)"<<endl;
    cin>>t;
    si=(p*r*t)/100;
    cout<<"Simple Interest is "<<si<<endl;
    getch();
    return 0;
}
