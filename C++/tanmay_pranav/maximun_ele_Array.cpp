#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,5,3,18,10};
	int max=a[0];
	for(int i=1;i<=4;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	
	cout<<"max element in an array = "<<max<<endl;
}
