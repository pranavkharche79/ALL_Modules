#include<iostream>
using namespace std;

class a
{
	int p;
	public:
		a()
		{
			cout<<"in default of A class\n";
		}
	
};

class b:virtual public a
{
	int q;
	public:
		b()
		{
			cout<<"in default of B class\n";
		}
};

class c:virtual public a
{
	int r;
	public:
		c()
		{
			cout<<"in default of C class\n";
		}	
};

class d:public b,public c
{
	int s;
	public:
		d()
		{
			cout<<"in default of D class\n";
		}
};

int main()
{
	d obj;
}
