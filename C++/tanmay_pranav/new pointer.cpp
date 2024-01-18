#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter array size \n";
	cin>>n;
	int *p=new int[n];
	cout<<"enter array element \n";
	for(int i=0;i<n;i++)
	{
	cin>>p[i];
	cout<<p[i]<<" ";
	}
	delete []p;                             
}
