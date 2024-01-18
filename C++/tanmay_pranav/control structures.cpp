#include<iostream>
using namespace std;

int main()
{
	int i=0;
	
	cout<<"use of while\n";
	while(i<=10)
	{
	cout<<i<<endl;
	i++;
	} 
	
	cout<<"use of do while\n";
	int a=0;
	do
	{
		cout<<a<<endl;
        a++;
        
	}while (a<=10);
	
	cout<<"use of for\n";
	for(i=0;i<=10;i++)
    {
     cout<<i<<endl;         	
    }
     int x=0;
    switch(x)
    {
    	case 0:cout<<"switch is executed:"<<endl;
    			break;
    	case 1:cout<<"switch is executed:"<<endl;
    			break;
	}
}
