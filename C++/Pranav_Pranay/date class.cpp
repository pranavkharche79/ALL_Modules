#include<iostream>
using namespace std;
class date
{
	int dd, mm, yy;
 public:
    
    	void getData()
    	{
    		cout<<"enter the date:- "<<endl;
    		cin>>dd>>mm>>yy;
		}
		void display()
		{
			cout<<"date is :- "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
		void setdd(int d)
		{
			dd=d;
		}
		//now month
		void setmm(int m)
		{
			mm=m;
		}
		void setyy(int y)
		{
			yy=y;
		}
		int getdd()
		{
			return dd;
		}
		int getmm()
		{
			return mm;
		}
	    int getyy()
		{
			return yy;
		}
			
     
};
void date :: acceptpara(int p,int q,int r)
{
	dd=p;
	mm=q;
	yy=r;
}
int main()
{
	date c1;
	c1.getData();
	c1.display();
	cout<<"size of c1 "<<sizeof(c1)<<endl;
	complex c2;
	c2.acceptpara(5,12,2005);
	c2.display();
	return 0;
}

