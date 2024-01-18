#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
	int a,b;
	cout<<"enter  value of a and b:- "<<endl;
	cin>>a>>b;
	cout<<"before swap:-"<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"after swap:-"<<a<<" "<<b<<endl;
	return 0;
}
void swap(int& x, int& y)
{

	int temp=x;
    x=y;
    x=temp;
    cout<<"after swap:-"<<x<<" "<<y<<endl;
}
