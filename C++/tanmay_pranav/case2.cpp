#include<iostream>
using namespace std;

class Employee
{
	int id;
	public:
		Employee();
		Employee(int);
		void display();
		int findsalary();
};

Employee :: Employee()
{
	cout<<"Inside default of employee "<<endl;
}

Employee :: Employee(int i)
{
	cout<<"Inside para of employee "<<endl;
	id=i;
}
void Employee::display() 
{
	cout<<"Employee ID is : "<<id<<endl;
}
int Employee :: findsalary()
{
	return 33;
}

class wageEmployee : public Employee 
{
	int hrs,rate;
	
	public:
		wageEmployee();
		wageEmployee(int,int,int);
		int findSalary();
		void display();
	
};

wageEmployee::wageEmployee()
{
	cout<<"Inside default of wageemployee "<<endl;
}

wageEmployee::wageEmployee(int id,int hrs,int rate):Employee(id)
{
	cout<<"Inside para of wageemployee "<<endl;
	this->hrs=hrs;
	this->rate=rate;

}
int wageEmployee::findSalary()
{
	return hrs * rate;
}
void wageEmployee::display() 
{
	Employee::display();
	cout<<"HRS are "<<hrs<<endl;
	cout<<"Rate is "<<rate<<endl;
}

class salesManager:public wageEmployee 
{
	int sales,comm;
	
	public:
		salesManager();
		salesManager(int,int,int,int,int);
		int findSalary();
		void display();
	
};

salesManager :: salesManager()
{
	cout<<"Inside default of sales manager"<<endl<<endl;
	sales=0;
	comm=0;
}

salesManager :: salesManager(int id,int hrs,int rate,int sales,int comm): wageEmployee(id,hrs,rate)
{
	cout<<"Inside para of sales manager"<<endl<<endl;
	this->sales=sales;
	this->comm= comm;
}

int salesManager :: findSalary()
{
	return (wageEmployee :: findSalary())+ (sales * comm);
}

void salesManager :: display()
{
	wageEmployee :: display();
	cout<<"sales of an employee : "<<sales<<endl;
	cout<<"Commission of an employee : "<<comm<<endl;
}

int main()
{
	salesManager* sm = new salesManager(101,10,500,2000,1);
	Employee* ptr=new Employee();
	cout<<ptr->findsalary()<<endl;
	ptr= new wageEmployee();
	cout<<ptr->findsalary()<<endl;
	ptr= new salesManager();
	cout<<ptr->findsalary()<<endl;
}
