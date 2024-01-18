#include<iostream>
using namespace std;
void display(char='*',int=3);
int main()
{
	cout<<"no arguments are passed: "<<endl;
	display();
	cout<<"first argument pass: "<<endl;
	display('#');
	cout<<"both arguments pass: "<<endl;
	display('$',10);
}
void display(char c,int count)
{
	int i=0;
	while(i<count)
	{
		cout<<c;
		++i;
	}
	cout<<endl;
}

