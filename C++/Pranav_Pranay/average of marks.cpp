#include<iostream>
using namespace std;
int main()
{
	int m1,m2,m3,m4,m5;
	float avg;
	int sum;
	cout<<"enter five marks of a students :- "<<endl;
	cin>>m1>>m2>>m3>>m4>>m5;
	sum=m1+m2+m3+m4+m5;
	avg=sum/5;
	cout<<"average of student:- "<<avg<<endl;
	return 0;
}
