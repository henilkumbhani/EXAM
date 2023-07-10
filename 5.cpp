#include<iostream>
#include<string.h>
using namespace std;
class A{
	public :		
		int id;
		char name[100];
		char role[100];
		void set()
		{
		    cout<<"enter id = ";
		    cin>>id;
		    cout<<"enter name = ";
		    cin>>name;
		    cout<<"enter role = ";
		    cin>>role;
		}
};
class B{
	public :
		int salary;
		int experience;
		void set()
		{
			cout<<"enter salary = ";
			cin>>salary;
			cout<<"enter experience = ";
			cin>>experience;
		}
};
class C{
	public :	
		char comp_name[100];
		char address[100];	
		void set()
		{
			cout<<"enter comp_name = ";
			cin>>comp_name;
			cout<<"enter address = ";
			cin>>address;
		}
};
class D {
	public :
		char mail[100];
		char contact[100];
		void set()
		{
			cout<<"enter email = ";
			cin>>mail;
			cout<<"enter contact = ";
			cin>>contact;
		}
		void get()
        {
		int id;
		char name;
		char role;
		int salary;
		int experience;
		char comp_name;
		char address;
		char mail;
		char contact;
		    cout<<"id = "<<id<<endl;
			cout<<"name = "<<name<<endl;
			cout<<"role = "<<role<<endl;
			cout<<"salary = "<<salary<<endl;
			cout<<"experience = "<<experience<<endl;
			cout<<"comp_name = "<<comp_name<<endl;
            cout<<"address = "<<address<<endl;
            cout<<"mail = "<<mail<<endl;
            cout<<"contact = "<<contact<<endl;
		}
};

int main()
{
	A a1;
    a1.set();
	B b1;
	b1.set();
	C c1; 
    c1.set(); 
    D d1;
    d1. get();
}
