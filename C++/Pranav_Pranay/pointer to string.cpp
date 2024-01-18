#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char *name[5]={"ram","rohan","rahul","rohit","rachana"};
	for(int i=0;i<5;++i)
	{
		int j=0;
		cout<<name[i]<<endl;
		cout<<(name+i)<<endl;
		cout<<*(name+i)<<endl;
		int x=strlen(name[i]);
		for(j=0;j<=x;++j)
		{
			cout<<*(*(name+i)+j);
		}
		cout<<endl;
	}	
	return 0;
}
