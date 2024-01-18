#include<iostream>
#include<string.h>
using namespace std;

class string1
{
	int len;
	char* ptr;
	public:
		string1(char*);
		void show();
		string1(char,int);
		string1(int);
		string1();
};

string1::string1(char ch,int len)
{
	int i;
	this->len=len;
	ptr=new char[this->len+1];
	for(i=0;i<this->len;i++)
	{
		ptr[i]=ch;
	//	cout<<ptr[i];
	}
	ptr[i]='\0';
}

string1::string1(char* ptr1)
{
	len=strlen(ptr1);
	ptr=new char[len+1];
	strcpy(this->ptr,ptr1);
}

string1::string1(int len)
{
	this->len=len;
	ptr=new char[this->len+1];
	char ch[this->len+1];
	cout<<"enter string= \n";
	cin>>ch;
	strcpy(ptr,ch);
}

string1::string1()
{
	int len;
	cout<<"Enter length= \n";
	cin>>len;
	this->len=len;
	char ptr[len+1];
	this->ptr=new char[this->len+1];
	cout<<"Enter string= \n";
	cin>>ptr;
	strcpy(this->ptr,ptr);
}

void string1::show()
{
	cout<<"string is "<<ptr<<endl;
	cout<<"length is "<<len<<endl;
}

int main()
{
	string1 s1("cdac");
	s1.show();
	cout<<endl;
	string1 s2('*',50);
	s2.show();
	cout<<endl;
	string1 s3(5);
	s3.show();
	cout<<endl;
	string1 s4;
	s4.show();
	return 0;
}
