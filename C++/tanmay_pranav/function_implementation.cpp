#include<iostream>
using namespace std;
void get(int,int);
void display();
class complex
{
	
int real,img;
public:
void getdata()
	{
		cout<<"Enter real and img= "<<endl;
		cin>>real>>img;
	}
void display()
	{
		cout<<"The number is"<<real<<"+"<<img<<"i"<<endl;
	}
};
int main()
{
	complex c1;
	c1.getdata();
	c1.display();
	return 0;
}
