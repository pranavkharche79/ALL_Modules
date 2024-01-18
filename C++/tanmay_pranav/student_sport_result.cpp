#include<iostream>
using namespace std;

class student
{
	int roll_no,m1,m2;
	public:
		void getdata()
		{
			cout<<"enter roll no.= "<<endl;
			cin>>roll_no;
			cout<<"Enter two subjects marks :"<<endl;
			cin>>m1>>m2;
		}
};

class sport
{
	int m3;
	public:
		void getData()
		{
			cout<<"Enter sports mark= "<<endl;
			cin>>m3;
		}
};

class result:public student,sport
{
	int total;
	float avg;
	public:
		void calculation()
		{
			total=m1+m2+m3;
			avg=(float)total/3;
		}
		void display()
		{
			cout<<"Average is = "<<endl;
		}
};

int main()
{
	result r1;
	r1.getdata();
	r1.getData();
	r1.calculation();
	r1.display();
	return 0;
}
