#include<iostream>
using namespace std;

class Printer
{
	public:	
	
		virtual void display()=0; 
};

class PrintA: public Printer
{
	public:
		void display()
		{ 
		 	cout<<"In PrintA ";
		}
};


class PrintB:public PrintA
{
	public:
		void display()
		{
	    	PrintA::display();
		 	cout<<"\nIn PrintB \n";
		}
};

int main()
{
	PrintB *ptr=new PrintB();
	ptr->display();
	cout<<"Hence pure virtual function executed: ";
		
	return 0;
}
