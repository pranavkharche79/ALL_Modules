#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"enter value of a & b "<<endl;
	cin>>a>>b;
	cout<<"addition is  "<<a+b<<endl;
	cout<<"substraction  is  "<<a-b<<endl;
	cout<<"multiplication is  "<<a*b<<endl;
	cout<<"division is  "<<a/b<<endl;
	cout<<"mod division is  "<<a%b<<endl;
	
	c=(a>b)?a:b;
	cout<<"relational & ternary executed "<<c<<endl;
	if(a&&b)
	{
		cout<<"logical operator executed "<<a<<endl;	
	}
	a+=1; //a=a+1
	cout<<"assignment operator executed "<<a<<endl;
	
	cout<<"Bitwise operator "<<(a&b)<<endl;
	return 0;
}
