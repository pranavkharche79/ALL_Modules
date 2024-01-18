#include<iostream>
using namespace std;

class A
{	
	int a;
	public:
		void show()
		{ 
			cout<<"In display of class A"<<endl;
		}
		
		class B
		{
			int b;
			public:
				void show()
				{ 
					cout<<"In display of class B"<<endl;	
				}
		};
	
};

class C:public A
{
	
	int c;
	public:
		
		void show()
		{ 
		
			cout<<"In display of class C"<<endl;
		}
};

int main()
{		
//	B::A obj;
//	obj.show();
	C::B obj;
	obj.show();
//	B::C obj;
//	obj.show();
//	A::C obj;
//	obj.show();
//	C::A obj;
//	obj.show();
	return 0;
}	
