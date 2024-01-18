#include<iostream>
using namespace std;

class date
{
	int dd,mm,yy;
	public:
		void show();
		date(int,int,int);
		~date();
};
date::date(int d,int m,int y)
{
	dd=d;
	mm=m;
	yy=y;
}
void date::show()
{
	cout<<"date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
}

date::~date()
{
	cout<<"Destructor is called \n";
}

int main()
{
	date d(8,8,17);
	date d1(d);
	d.show();
	d1.show();
	return 0;
}
