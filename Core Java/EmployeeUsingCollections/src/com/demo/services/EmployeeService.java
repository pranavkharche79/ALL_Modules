package com.demo.services;

import java.util.List;

import com.demo.beans.Employee;

public interface EmployeeService {

	void addNewEmployee(int c);

	List<Employee> displayall();

	Employee DisplaybyId(int id);

	List<Employee> sortbyname();


}
