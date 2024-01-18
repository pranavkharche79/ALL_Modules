#include<iostream>
using namespace std;

int main()
{
	int m,n,i,sum=0;
	float avg;
	cout<<"Enter no. of subject=  \n";
	cin>>m;
	cout<<"Enter no. of character= \n";
	cin>>n;
	int* marks_m= new int[m];
	char* name_n= new char[n];
	cout<<"Enter marks= \n";
	for(i=0;i<m;i++)
	{
		cin>>marks_m[i];
		sum=sum+marks_m[i];
	}
	avg= (float)sum/m;
	cout<<"enter name of student \n";
	cin>>name_n;
	cout<<"name is "<<name_n<<"\t";
	cout<<"avg is = "<<avg;
	delete[] marks_m;
	delete[] name_n;
	return 0;
}
