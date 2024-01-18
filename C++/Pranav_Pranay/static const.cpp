#include<iostream>
using namespace std;
class complex
{
	int real,img;
	static const int cnt1;
	public:
		static const int cnt;
		complex()
		{
			cout<<"default is invocked"<<endl;
			real=5;
			img=5;
		}
		
		static int getcnt()
		{
			return cnt1;
		}

};
const int complex::cnt=5;
const int complex::cnt1=10;
int main()
{
	complex c1;
	cout<<"no. of objects created = "<<complex::getcnt()<<endl;
	cout<<"size of obj= "<<sizeof(c1)<<endl;
	cout<<complex::cnt;
	
}
