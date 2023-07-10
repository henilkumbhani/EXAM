#include<iostream>
#include<string.h>
using namespace std;
class hotel{

    private:
    	int id;
    	char name[1000];
    	char type[1000];
    	int staff;
    	int room;
    	int establish_year;
    	char address[1000];
    	int ratting;
    	char website[1000];
    public:
    	void set(int id,char name[],char type[],int staff,int room,int establish_year,char address[],int ratting,char website[])
    	{
    		this->id = id;
    		strcpy(this->name,name);
    		strcpy(this->type,type);
    		this->staff = staff;
    		this->room = room;
    		this->establish_year = establish_year;
    		strcpy(this->address,address);
    		this->ratting = ratting;
    		strcpy(this->website,website);
		}
		void get()
		{
			cout<<"id = "<<id<<endl;
			cout<<"name = "<<name<<endl;
			cout<<"type = "<<type<<endl;
			cout<<"staff = "<<staff<<endl;
			cout<<"room = "<<room<<endl;
			cout<<"estsblish_year = "<<establish_year<<endl;
			cout<<"address = "<<address<<endl;
			cout<<"ratting = "<<ratting<<endl;
			cout<<"website = "<<website<<endl;
		}
};
    	
int main()
{
	hotel h;
	
	h.set(555,"hyaat palace","5_star",500,1000,1986,"london",2000,"www.hyaat palace.com");
	
	h.get();
	
}
  
