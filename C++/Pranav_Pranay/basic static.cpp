#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		static int cnt;
		complex()
		{
			cout<<"default is invocked"<<endl;
			real=5;
			img=5;
			cnt++;
		}
		complex(int real,int img)
		{
			cout<<"parametrized is invocked \n";
			this->real=real;
			this->img=img;
			cnt++;
		}
		static int getcnt()
		{
			return cnt;
		}
};
int complex::cnt=0;
int main()
{
	complex c1;
	complex c2(10,10);
	cout<<"no. of objects created = "<<complex::getcnt()<<endl;
	cout<<"size of obj= "<<sizeof(c1)<<endl;
	cout<<complex::cnt;
	
}
