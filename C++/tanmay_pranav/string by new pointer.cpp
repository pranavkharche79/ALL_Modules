#include<iostream>
using namespace std;

int main()
{
	char* str;
	int n;
	cout<<"enter size: ";
	cin>>n;
	str=new char[n+1];
	cout<<"Enter the string=  \n";
	cin>>str;
	cout<<"string is =  \n";
	cout<<str;
	delete [] str;
}
