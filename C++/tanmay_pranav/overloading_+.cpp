#include <iostream>
using namespace std;
  
class Complex 
{
	int real,imag;
	  
	public:
		Complex()
		{
			real=0;
			imag=0;
		}
	    Complex(int r, int i)
	    {
	        real = r;
	        imag = i;
	    }
	  
	    Complex operator+(Complex& obj)
	    {
	        Complex res;
	        res.real = real + obj.real;
	        res.imag = imag + obj.imag;
	        return res;
	    }
	    
	    Complex operator-(Complex& obj)
	    {
	        Complex res;
	        res.real = real - obj.real;
	        res.imag = imag - obj.imag;
	        return res;
	    }
	    
	    void display() 
		{
			 if(imag>0)
			cout<<"complex number is "<<real<<"+"<<imag<<"i"<<endl;
			else
			cout<<"complex number is "<<real<<imag<<"i"<<endl; 
		}
};
  
int main()
{
    Complex c1(11,5);
	Complex c2(4,-10);
    Complex c3 = c1+c2;
    c3.display();
}
