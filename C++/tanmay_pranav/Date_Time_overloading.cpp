#include <iostream>
using namespace std;
  
class date
{
	int dd,mm,yy;
	  
	public:
		date()
		{
			dd=0;
			mm=0;
			yy=0;
		}
	    date(int d, int m,int y)
	    {
	        dd=d;
	        mm=m;
	        yy=y;
	    }
	  
	    friend date operator+(date& obj,int y)
	    {
	        
	    	obj.dd = obj.dd + y;
	        obj.mm = obj.mm + 3;
	        obj.yy = obj.yy + 1;
	        
	    }
	    
	    void display() 
		{
			 cout<<dd<<"/"<<mm<<"/"<<yy<<endl; 
		}
		
};

class time
{
	int hh,mm,ss;
	  
	public:
		time()
		{
			hh=0;
			mm=0;
			ss=0;
		}
	    time(int d, int m,int y)
	    {
	        hh=d;
	        mm=m;
	        ss=y;
	    }
	  
	    friend time operator-(time& obj,int y)
	    {
	        
	    	obj.hh = obj.hh - y;
	        obj.mm = obj.mm - 30;
	        obj.ss = obj.ss - 30;
	        
	    }
	    
	    void display() 
		{
			 cout<<hh<<"-"<<mm<<"-"<<ss<<endl; 
		}
		
};


int main()
{
    date d1(23,9,23);
    cout<<"Given values for date = ";
	d1.display();
    d1+5;
    cout<<"After overloading + operator= ";
    d1.display();
    time t1(12,30,30);
    cout<<"Given values for time = ";
    t1.display();
    t1-12;
    cout<<"After overloading - operator= ";
	t1.display();
}
