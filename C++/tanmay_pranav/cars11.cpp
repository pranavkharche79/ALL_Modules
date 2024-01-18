#include<iostream>
using namespace std;
int main()
{
	int a[4][4]={{1,0,1,1},{1,1,1,1},{0,1,0,1},{0,0,0,0}};
	int c=0;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<a[i][j];
			cout<<"\t";
		}
		cout<<endl;
	}
	int max=0;

	for(int i=0;i<4;i++)
	{
		c=0;
		for(int j=0;j<4;j++)
		{
			if(a[i][j]==1)
			j++;
			c++;
		}
		if(c>max)
		max=c;
		else
		max=max;
		cout<<endl;
	}
	cout<<"max cars stollen:"<<max/2;
	
}
