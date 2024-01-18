#include<iostream>
#include<string.h>
using namespace std;
int fun();
int main()
{
	cout<<"final value: "<<fun()<<endl;
    cout<<"final value: "<<fun()<<endl;
    cout<<"final value: "<<fun()<<endl;
}
int fun()
{
	static int x=0;
	cout<<x<<endl;
	x++;
	return x;
}

