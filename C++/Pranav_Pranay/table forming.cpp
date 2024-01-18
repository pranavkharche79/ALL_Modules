#include<iostream>
using namespace std;
void display();
int main()
{
	display();
	cout<<endl<<"|  Datatypes |\t size  |"<<endl;
	display();
	cout<<endl<<"|  Integer   |\t   4   |"<<endl;
	display();
	cout<<endl<<"|  Float     |\t   4   |"<<endl;
	display();
	cout<<endl<<"|  Double    |\t   8   |"<<endl;
	display();
}
void display()
{
	for(int i=0;i<=11;++i)
		{
			cout<<"__";
		}
}
