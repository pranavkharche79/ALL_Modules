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
    		cout<<"enter the roll no,name,fees  "<<endl;
    		cin>>rollno>>name>>fees;
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
student s[3];
for(int i=0;i<3;i++)
{
	s[i];
	s[i].display();
}

return 0;
}

