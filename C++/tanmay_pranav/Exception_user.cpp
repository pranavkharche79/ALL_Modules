#include <iostream>
using namespace std;
float division (int x,int y)
{
	if(y==0)
	{
		cout<<"attempted to divide by zero!";
	}
	else
	{
	return(x/y);
	}
}
int main()
{

int i=25;
int j;
float k;
	cout<<"enter the value of j \n";
	cin>>j;
	k=division(i,j);
	cout<<k<<endl;
}
