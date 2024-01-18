#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int rollno;
	char name[10];
	double fees;
 public:
    
    	student ()
    	{
    		cout<<"enter the roll no  "<<endl;
    		cin>>rollno;
    		cout<<"enter the name "<<endl;
    		cin>>name;
    		cout<<"enter the fees "<<endl;
    		cin>>fees;
		}
		student (int r,char* n,double f)
    	{
    		rollno=r;
    		strcpy(name,n);
    		fees=f;
		}
		void display()
		{
			cout<<rollno<<"\t"<<name<<"\t"<<fees<<endl;
		}
};

int main()
{
student s1;
s1.display();


	return 0;
}

