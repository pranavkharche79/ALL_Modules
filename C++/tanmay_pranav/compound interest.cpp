#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int p=10000;
	float r=7.5f;
	int t=3;
	int n=2;
	double ci;
	
	ci=p*pow(1+(r/100*n),n*t);
	cout<<"compound interest= "<<ci;
	
}
