#include<iostream>
using namespace std;

class demo1
{
	public:
		void display1()
		{
			cout<<"inside demo1 "<<endl;
		}
	friend void fun();
};

class demo2
{
	public:
		void display2()
		{
			cout<<"inside demo2 "<<endl;
		}	
		friend void fun();
		
	
};

class demo3:public demo1,demo2
{
	public:
		void display3()
		{
			demo1::display1();
			demo2::display2();
			cout<<"inside demo3"<<endl;
		}
};

void fun()
{
	cout<<"inside the friend function "<<endl;
}


int main()
{
	fun();
	demo3 d1;
	d1.display3();
	
}
