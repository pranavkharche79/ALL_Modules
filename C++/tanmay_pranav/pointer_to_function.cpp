#include<iostream>
using namespace std;

void function(int* p,int* q)
{
	int temp=*p;
	*p=*q;
	*q=temp;
	cout<<"After swap="<<*p<<" "<<*q<<endl;
}

int main()
{
	int a,b;
	cout<<"Enter value = "<<endl;
	cin>>a>>b;
	cout<<"before swap="<<a<<" "<<b<<endl;
	function(&a,&b);
	return 0;
}

