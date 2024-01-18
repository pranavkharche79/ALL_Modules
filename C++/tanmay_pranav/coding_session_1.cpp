#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int count=0;
	int i=0;
	int a[]={1,5,7,1,3,3};
	int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n);
    for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
    
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==6)
			{
				count++;
			}
		}
	}
	cout<<"\npair are= ";
	cout<<count;
}
