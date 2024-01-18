#include<iostream>
using namespace std;
class complex
{
	int real, img;
 public:
    
    	void getData()
    	{
    		cout<<"enter real and imaginary number:- "<<endl;
    		cin>>real>>img;
		}
		void display()
		{
			cout<<"real and imaginary number is:- "<<real<<"+"<<img<<"i"<<endl;
		}
		
		void setReal(int r)
		{
			real=r;
		}
		int getReal()
		{
			return real;
		}
		void setImg(int i)
		{
			img=i;
		}
		int getImg()
		{
			return img;
		}		
     
};
int main()
{
	complex c1;
	c1.getData();
	c1.display();
	return 0;
}

