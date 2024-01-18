#include<iostream>
using namespace std;

class A
{
	int roll;
	public:
		A()
		{
			roll=0;
		}
		A(int i)
		{
			roll=i;
		}
		void display()
		{
			cout<<"A\n"<<roll<<endl;
		}
};

class B:public A
{
	int id;
	public:
		B()
		{
			id=0;
		}
		B(int r,int i):A(i)
		{
			id=r;
		}
		void display()
		{
			A::display();
			cout<<"B\n"<<id<<endl;
		}
};

class C:public B
{
	int num;
	public:
		C()
		{
			num=0;
		}
		C(int n,int r,int i):B(r,i)      //initialization list
		{
			num=n;
		}
		void display()
		{
			B::display();
			cout<<"C\n"<<num<<endl;
		}
};

int main()
{
	C c1(932587476,101,1000);
	c1.display();
}
