#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int rollno;
	double fees;
 public:
    
    	student ()
    	{
    		cout<<"enter the roll no  "<<endl;
    		cin>>rollno;
    		cout<<"enter the fees "<<endl;
    		cin>>fees;
		}
		void display() const
		{
			cout<<rollno<<"\t"<<fees<<endl;
		}
		void setrollno(int r)
		{
			rollno=r;
		}
		void setfees(double f)
		{
			fees=f;
		}
		int getrollno() const
		{
			return rollno;
		}
		int getfees() const
		{
			return fees;
		}
};

int main()
{
 student s1;
s1.display();
s1.setrollno(5465);
s1.getrollno();
s1.display();
s1.setfees(55.55);
s1.getfees();
s1.display();
return 0;
}

