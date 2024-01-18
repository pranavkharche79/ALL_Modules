package com.demo.test;
import java.util.List;
import java.util.Scanner;

import com.demo.beans.Employee;
import com.demo.services.EmployeeService;
import com.demo.services.EmployeeServiceImp;

public class TestEmployee {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		EmployeeService eservice=new EmployeeServiceImp();
		int choice=0;
		do {
		System.out.println("1. Add new Employee\n2. delete employee by id\n 3. modify salary\n");
		System.out.println("4. Display all\n5. display by id\n 6. sort by salary\n7. sort by name\n8.exit\n choice: ");
		choice=sc.nextInt();
		switch (choice) {
		case 1: {
			System.out.println("1. salaried\n2.contract\n 3.vendor");
			int c=sc.nextInt();
			eservice.addNewEmployee(c);
			break;
		}
		case 2: {
					
			break;
		}
		case 3: {
			
			break;
		}
		case 4: {
			List<Employee> eList=eservice.displayall();
			break;
		}
		case 5: {
			int id=sc.nextInt();
			Employee e=eservice.DisplaybyId(id);
			break;
		}
		case 6: {
			
			break;
		}
		case 7: {
			List<Employee> eList=eservice.sortbyname();
			eList.stream().forEach(System.out::println);
			break;
		}
		case 8: {
			sc.close();
			System.out.println("Thank You");
			break;
		}
		default:
			throw new IllegalArgumentException("Unexpected value: " + choice);
		}
		
		
		}while(choice!=8);
}
}
