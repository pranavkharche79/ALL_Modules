#include<iostream>
#include<string.h>
using namespace std;
class account
{
	int accno;
	char name[10];
	public:static const float roi;
	
	public:
		account(int a,char* p)
		{
			cout<<"Account no and name is:"<<endl;
			this->accno=a;
			strcpy(name,p);
			cout<<accno<<"  "<<name<<endl;
		}
		
		static const float getroi()
		{
			return roi;
		}

};
const float account::roi=6.5f;
int main()
{
	account a1(123,"ram");
	cout<<"rate of interest is : "<<account::roi;
	
}
