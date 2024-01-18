package com.demo.dao;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;

import com.demo.beans.ContractEmployee;
import com.demo.beans.Employee;
import com.demo.beans.SalariedEmployee;

public class EmployeeDaoImpl implements EmployeeDao {
	static List<Employee> elist;
	
	static {
    	elist=new ArrayList<>();
 		elist.add(new SalariedEmployee(12,"Rajat","4444","a@gmail.com","hr","associate",LocalDate.of(2002, 12,30),4556,345));
 		elist.add(new SalariedEmployee(13,"Ajit","555","a22@gmail.com","admin","associate",LocalDate.of(2002, 10,30),4577,377));
 		elist.add(new ContractEmployee(14,"Rajas","666","r345@gmail.com","admin","manager",LocalDate.of(2002, 12,30),30,4000));
 		elist.add(new ContractEmployee(15,"Ashwini","777","ashu@gmail.com","hr","associate",LocalDate.of(2000, 12,30),40,5000));
     }

	@Override
	public void save(Employee e) {
		elist.add(e);
	}

	@Override
	public List<Employee> displayall() {
		return elist;
	}

	@Override
	public Employee dispalybyID(int id) {
		int pos=elist.indexOf(new SalariedEmployee(id));
		if(pos!=-1)
		{
			return elist.get(pos);
		}
		return null;
	}

	@Override
	public List<Employee> sortbyname() {
		List<Employee> elst=new ArrayList<Employee>();
		for(Employee e:elist)
		{
			elst.add(e);
		}
		return null;
	}
}
