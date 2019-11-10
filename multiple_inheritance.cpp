#include <iostream>
using namespace std;
// calss person
class person
{
	char name[30];
	int age;
	public:
	void read()
	{
		cout<<"enter name:";
		cin>>name;
		cout<<"enter age:";
		cin>>age;
	}
    void show()
    {
        cout<<"name : "<<name<<endl;
	    cout<<"age : "<<age<<endl;
	}		
};
// class company
class company
{
	char name[30];
	int empid;
	public:
		void read()
		{
			cout<<"enter company name : ";
			cin>>name;
			cout<<"enter employee id : ";
			cin>>empid;
		}
		void show()
		{
			cout<<"company name : "<<name<<endl;
			cout<<"employee id : "<<empid<<endl;
		}
};
// class employee 
class employee : public person,public company 
{
	char dept[10];
	float salary;
	public :
		void read()
		{
			person::read();
			company::read();
			cout<<"enter department : ";
			cin>>dept;
			cout<<"enter salary : ";
			cin>>salary;
		}
		void show()
		{
			person::show();
			company::show();
			cout<<"department : "<<dept<<endl;
			cout<<"salary : "<<salary<<endl;
		}
} ;
//main() function 
int main()
{
	employee a;
	cout<<"enter your nformation :"<<endl;
	a.read();
	cout<<"entered details : "<<endl;
	a.show();
	return 0;
}		