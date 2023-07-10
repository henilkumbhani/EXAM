#include<iostream>
#include<string.h>

using namespace std;

class time
{
	public:	
		int hh,mm,ss;

};

int main()
{
	time t;

	cout<<"enter second : ";
	cin>>t.ss;

	t.hh = t.ss/3600;
	t.mm = (t.ss%3600)/60;
	t.ss = (t.ss%3600)%60;

	 cout<<"time formate hh : mm : ss = "<<t.hh<<" : "<<t.mm<<" : "<<t.ss;	

	return 0;
}
