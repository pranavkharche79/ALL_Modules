#include<iostream>
using namespace std;

class Employee
{
	int id;
	
	public:
		Employee();
		Employee(int);
		void display();
		virtual int findSalary();
};

Employee :: Employee()
{
	cout<<"Inside Employee Default Constructor"<<endl;
}

Employee :: Employee(int i)
{
	cout<<"Inside Employee Parameterised Constructor "<<endl;
	id=i;
}
void Employee::display() 
{
	cout<<"Employee ID is : "<<id<<endl;
}

int Employee::findSalary()
{
	return 0;
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
	cout<<"Inside Wage Employee Default Constructor "<<endl<<endl;
}

wageEmployee::wageEmployee(int id,int hrs,int rate):Employee(id)
{
	cout<<"Inside Wage Employee Para Constructor"<<endl;
	this->hrs=hrs;
	this->rate=rate;

}
int wageEmployee::findSalary()
{
	return hrs*rate;
}
void wageEmployee::display() 
{
	Employee::display();
	cout<<"Hrs are "<<hrs<<endl;
	cout<<" Rate is "<<rate<<endl;
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
	cout<<"Inside Default constructor of Sales Manager"<<endl;
	sales=0;
	comm=0;
}

salesManager :: salesManager(int id,int hrs,int rate,int sales,int comm): wageEmployee(id,hrs,rate)
{
	cout<<"Inside Paramerterised constructor of Sales Manager"<<endl;
	this->sales=sales;
	this->comm= comm;
}

int salesManager :: findSalary()
{
	return (wageEmployee::findSalary())+sales*comm;
}

void salesManager :: display()
{
	wageEmployee :: display();
	cout<<"Sales : "<<sales<<endl;
	cout<<"Commission : "<<comm<<endl;
}

int main()
{
	Employee *ptr= new Employee();
	cout<<"The Salary is : "<<ptr->findSalary()<<endl<<endl;
	
	ptr= new wageEmployee(101,22,22);
	cout<<"The Salary is : "<<ptr->findSalary()<<endl<<endl;
	
	ptr= new salesManager(101,21,32,21,13);
	cout<<"The Salary is : "<<ptr->findSalary();
}
