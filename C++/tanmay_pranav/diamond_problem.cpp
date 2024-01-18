#include<iostream>
using namespace std;

class A
{
	int a;
	public:
		A()
		{
			cout<<"Inside default of class A"<<endl;
			a=0;
		}
		A(int a)
		{
			cout<<"Inside para of class A"<<endl;
			this->a=a;
		}
};


class B:public A
{
	int b;
	public:
		B()
		{
			cout<<"Inside default of class B"<<endl;
			b=0;
		}
		B(int b)
		{
			cout<<"Inside para of class B"<<endl;
			this->b=b;
		}
		
};


class C:public A
{
	int c;
	public:
		C()
		{
			cout<<"Inside default of class C"<<endl;
			c=0;
		}
		C(int c)
		{
			cout<<"Inside para of class C"<<endl;
			this->c=c;
		}
		
};



class D:public B,public C
{
	int d;
	public:
		D()
		{
			cout<<"Inside default of class D"<<endl;
			d=0;
		}
		D(int d)
		{
			cout<<"Inside para of class D"<<endl;
			this->d=d;
		}
		
};



int main()
{
	D d1;
	return 0;
}


