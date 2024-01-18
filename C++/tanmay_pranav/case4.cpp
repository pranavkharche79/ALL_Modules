#include<iostream>
using namespace std;
class employee
{
	int id;
	public:
		employee();
		employee(int);
		void display();
		virtual int findsalary()
		{
			return 0;
		}
};
employee::employee()
{
	cout<<"in default of employe"<<endl;
	id=0;
}
employee::employee(int i){
	cout<<"in para of emp"<<i<<endl;
	
}
void employee::display()
{
	cout<<"id of employe is"<<id<<endl;
}
class wageemployee:public employee
{
	int hrs,rate;
	public:
		wageemployee();
		wageemployee(int,int,int);
		void display();
		int findsalary();
};
wageemployee::wageemployee::wageemployee(){
	cout<<"in default of wage"<<endl;
	hrs=0;
	rate=0;
}
wageemployee::wageemployee(int i,int h,int r):employee(32)
{
	cout<<"in para of wage\n"<<endl;
	hrs=h;
	rate=r;
}
int wageemployee::findsalary()
{
	return hrs*rate;
}
void wageemployee::display()
{
	employee::display();
	cout<<hrs<<endl;
	cout<<rate<<endl;
}
class salesmanager:public wageemployee
{
	int sales,comm;
	public:
		salesmanager();
		salesmanager(int,int,int,int,int);
		void display();
		int findsalary();
};
salesmanager::salesmanager()
{
	cout<<"in default of sales\n"<<endl;
	sales=comm=0;
}
salesmanager::salesmanager(int i,int h,int r,int s,int c):wageemployee(i,h,r)
{
	cout<<"in para of sales\n"<<endl;
	sales=s;
	comm=c;
}
void salesmanager::display(){
	wageemployee::display();
	cout<<"sales of an employee is"<<sales<<endl;
	cout<<"comm of an emp is"<<comm<<endl;
}
int salesmanager::findsalary(){
	return (wageemployee::findsalary())+sales*comm;
}
int main()
{
	employee* ptr = new employee(2) ;
	cout<<ptr->findsalary()<<endl;
	ptr = new wageemployee(2,10,1000);
	cout<<ptr->findsalary()<<endl;
	ptr = new salesmanager(2,10,1000,10,1000);
	cout<<ptr->findsalary()<<endl;
}
