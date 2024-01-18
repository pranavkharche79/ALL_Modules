#include<iostream>
using namespace std;

class A
{
	int id,b,c;
	public:
		A()
		{
			id,b,c=0;
		}
	
		void fun() const
		{
			cout<<"fun1 called"<<endl;
		}
		void fun()
		{
			cout<<"Fun2 called"<<endl;
		}
		void show() const
		{
			cout<<"ifuiwe"<<endl;
		}
};

int main()
{
const A a1;
	a1.fun();
	a1.show();
	A a2;
	a2.fun();
	return 0;
}
