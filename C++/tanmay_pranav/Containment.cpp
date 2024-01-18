#include <string.h>  
#include <iostream>  
using namespace std;

class date
{
	int dd,mm,yy;
	public:
		date()
		{
			dd,mm,yy=0;
		}
		date(int d,int m,int y)
		{
			dd=d;
			yy=y;
			mm=m;
		}
		void dispaly()
		{
			cout<<"date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
		void getData()
		{
			cin>>dd>>mm>>yy;
		}
};

class student
{
	int roll;
	char name[20];
	date d1;
	public:
		student()
		{
			roll=0;
			strcpy(name,"\0");
		}
		student(int r,char a[],int d,int m,int y):d1(d,m,y)
		{
			roll=r;
			strcpy(name,a);
		}
		void display()
		{
			cout<<"Roll no. is "<<roll<<endl;
			cout<<"Name is "<<name<<endl;
			d1.dispaly();
		}
		void getData()
		{
			cout<<"Enter roll no.,name and date: "<<endl;
			cin>>roll>>name;
			d1.getData();
		}
};

int main()
{
	student s[3];
	for(int i=0;i<2;i++)
	{
		s[i].getData();
	}
	
	for(int i=0;i<=2;i++)
	{
		s[i].display();
	}
}
