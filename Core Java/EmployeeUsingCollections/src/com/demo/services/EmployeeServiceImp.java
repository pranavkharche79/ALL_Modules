package com.demo.services;

import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.List;
import java.util.Scanner;

import com.demo.beans.ContractEmployee;
import com.demo.beans.Employee;
import com.demo.beans.SalariedEmployee;
import com.demo.beans.Vendor;
import com.demo.dao.EmployeeDao;
import com.demo.dao.EmployeeDaoImpl;

public class EmployeeServiceImp implements EmployeeService {
	private EmployeeDao edao;
	public EmployeeServiceImp() {
		edao=new EmployeeDaoImpl();
	}

	@Override
	public void addNewEmployee(int c) {
		Scanner sc=new Scanner(System.in);
		System.out.println("enter pid");
		int pid=sc.nextInt();
		System.out.println("enter name");
		String nm=sc.next();
		System.out.println("enter mobile");
		String mob=sc.next();
		System.out.println("enter email");
		String em=sc.next();
		System.out.println("enter dept");
		String dept=sc.next();
		System.out.println("enter desg");
		String desg=sc.next();
		System.out.println("enter date of joining(dd/MM/yyyy)");
		String dt=sc.next();
		LocalDate ldt=LocalDate.parse(dt,DateTimeFormatter.ofPattern("dd/MM/yyyy"));
		Employee e=null;
		if(c==1) {
			System.out.println("Enter Salary: ");
			Double s=sc.nextDouble();
			System.out.println("Enter Salary: ");
			double b=sc.nextDouble();
			e= new SalariedEmployee(pid, dt, mob, em, dept, desg, ldt, s, b);
		}
		else if(c==2)
		{
				System.out.println("Enter hours: ");
				Double s=sc.nextDouble();
				System.out.println("Enter charges: ");
				double b=sc.nextDouble();
				e= new ContractEmployee(pid, dt, mob, em, dept, desg, ldt, s, b);
		}
		else {
			System.out.println("Enter no of employees: ");
			Double s=sc.nextDouble();
			System.out.println("Enter Amount: ");
			double b=sc.nextDouble();
			e= new Vendor(pid, dt, mob, em, dept, desg, ldt, s, b);
		}
		edao.save(e);
		
	}

	@Override
	public List<Employee> displayall() {
		return edao.displayall();
	}

	@Override
	public Employee DisplaybyId(int id) {
		return edao.dispalybyID(id);
	}

	@Override
	public List<Employee> sortbyname() {
		return edao.sortbyname();
	}

}
