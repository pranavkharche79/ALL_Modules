#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a,b,temp=0;
	cout<<"enter value of a and b= "<<endl;
	cin>>a>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swap= "<<a<<" "<<b;
}
