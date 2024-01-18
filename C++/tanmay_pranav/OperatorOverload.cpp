#include<iostream>
using namespace std;
class Date
{
	int dd,mm,yy;
	
	public:
		Date()
		{
			dd,mm,yy=0;
		}
		Date(int d,int m,int y)
		{
			dd=d;
			mm=m;
			yy=y;
		}
		Date operator+(Date&,int);
		Date operator-(Date&,int);
		void display()
		{	
		cout<<"Date is: "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
	
		
};
Date Date::operator+(Date& x,int z)
{
	x.dd=x.dd+z;
	x.mm=x.mm+z;
	x.yy=x.yy+z;
	return x;
}


Date Date::operator-(Date& x,int z)
{
	x.dd=x.dd-z;
	x.mm=x.mm-z;
	x.yy=x.yy-z;
	return x;
}


int main()
{
	Date d(10,02,2000);
	d+2;
	d.display();
	d-4;
	d.display();
	}
