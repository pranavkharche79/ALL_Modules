#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int*b=&a;
	int**c=&b;
	cout<<**c<<"\t"<<*b<<"\t"<<a<<endl;	
	cout<<sizeof(c)<<"\t"<<sizeof(**c)<<"\t"<<sizeof(*c)<<endl;
}

