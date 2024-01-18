#include <string.h>  
#include <iostream>  
#include <iomanip>
using namespace std;

class dob
{
	int dd,mm,yy;
	public:
		dob()
		{
			dd,mm,yy=0;
		}
		dob(int d,int m,int y)
		{
			dd=d;
			yy=y;
			mm=m;
		}
		void dispaly()
		{
			cout<<setw(10)<<"DOB is: "<<dd<<"/"<<mm<<"/"<<yy<<endl<<endl;
		}
		void getData()
		{
			cout<<"Enter date of birth: "<<endl;
			cin>>dd>>mm>>yy;
		}
};

class student
{
	int roll,m1,m2,m3,m4,m5;
	float avg;
	char name[20];
	dob d1;
	public:
		student()
		{
			roll=0;
			strcpy(name,"\0");
			m1,m2,m3,m4,m5=0;
			avg=0;
		}
		student(int r,char a[],int p,int q,int x,int s,int t,int d,int m,int y):d1(d,m,y)
		{
			roll=r;
			strcpy(name,a);
			m1=p;m2=q;m3=x;m4=s;m5=t;
			
		}
		void cal()
		{
			avg=float(m1+m2+m3+m4+m5)/5;
		}
		void display()
		{
			cout<<"Roll no. is "<<roll;
			cout<< setw(10)<<"Name is "<<name;
			cout<< setw(10)<<"Avg is "<<avg;
			d1.dispaly();
		}
		void getData()
		{
			cout<<"Enter roll no.: "<<endl;
			cin>>roll;
			cout<<"Enter name : "<<endl;
			cin>>name;
			cout<<"Enter five subjects marks.: "<<endl;
			cin>>m1>>m2>>m3>>m4>>m5;
			d1.getData();
		}
		int getrollno()
		{
			return roll;
		}
		char* getname()
		{
			return name;
		}
		void setrollno(int r)
		{
			roll=r;
		}
		void setname(char* n)
		{
			strcpy(name,n);
		}
};

int main()
{
	student s[4],temp;
	for(int i=0;i<4;i++)
	{
		s[i].getData();
		s[i].cal();
	}
	
	for(int i=0;i<4;i++)
	{
		s[i].display();
	}
	cout<<"\n \n sort information: \n \n";
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<4;j++)
		{
			
			if(s[i].getrollno()>s[j].getrollno())
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
			
		}
	}
	for(int i=0;i<4;i++)
	{
	s[i].display();
	cout<<endl;
	}
}
