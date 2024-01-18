#include<iostream>
using namespace std;
static int count=0;
class test
{
	int a,b;
	public:
		   void show()
		   {
		   	a=10;
		   	b=20;
		   	
		   	cout<<"obj add"<<this<<endl;
		   	cout<<"a"<<this->a<<endl;
		   	cout<<"b"<<this->b<<endl;
		   	count++;
		   	
		   	
		   }
		   
};
int main()
{
	
	test t1;
	cout<<&t1<<endl;
	t1.show();
	t1.show();
	t1.show();
	cout<<"count of no"<<count<<endl;
}









