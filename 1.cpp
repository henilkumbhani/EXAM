#include<iostream>
#include<string.h>
using namespace std;

class distance{
	public :
	int feet;
	int inch;
};

int main()
{
	 Distance d,d1,r;
	 cout<<"\nenter 1st distance \n";
	 cout<<"enter feet =";
	 cin>>d.feet;
	 cout<<"enter inch =";
	 cin>>d.inch ;

	 cout<<"\nenter 2nd distance \n";
	 cout<<"enter feet =";
	 cin>>d1.feet;
	 cout<<"enter inch =";
	 cin>>d1.inch ;

	 r.feet = d.feet+d1.feet;
 	 r.inch = d.inch+d1.inch;
	if (r.inch>12)
	{
		++r.feet;
		r.inch-=12;
	}
	cout<<"\nsum of distance ="<<r.feet<<"feet"<<r.inch<<"inch";
	cout<<endl;
	return 0;
}
