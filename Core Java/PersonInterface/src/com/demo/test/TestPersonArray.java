package com.demo.test;
import com.demo.beans.Person;
import com.demo.service.*;
import java.util.*;
public class TestPersonArray{
	
	public static void main(String arg[]) {
		
		Scanner sc=new Scanner(System.in);
		int choice = 0;
		PersonService p=new PersonServiceImpl();
		
		do {
			
			System.out.println("1-->Add person\n2-->Display all \n3-->SearchById\n4-->Search by name\n5-->Exit");
			System.out.println("Enter the choice: ");
			choice=sc.nextInt();
			
			switch(choice) {
				case 1:
					p.addNewPeople();
					break;
				case 2:
					Person parr[]=p.displayAll();
					
					//Checking whether the array  is empty or not
					if(parr!=null) {
						for(Person tempObj: parr) {
					//Checking whether the array object at particular position is empty or not
							if(tempObj!=null)
								System.out.println(tempObj);
							
						}
						
					}
					else {
						System.out.println("You don't give input of any person's details");
					}
					break;
				case 3:
					
					System.out.println("Enter the ID to search: ");
					int id=sc.nextInt();

					Person tempP=p.searchById(id);
					if(tempP!=null) {
						System.out.println(tempP);
					}
					else {
						System.out.println("Person with this id not found");
					}
					
					break;
				case 4:
					
					System.out.println("Enter the name to search: ");
					sc.nextLine();
					String name=sc.nextLine();

					Person[] obj=p.searchByName(name);
					boolean flag=false;
					if(obj!=null) {
						 for(int i=0; i < obj.length; i++) {
							 
							 if(obj[i]!=null) {
								 flag=true;
								 System.out.println(obj[i]);
							 }
						 }
							
					}
					if(!flag) {
						System.out.println("Name not found");
					}
					
					
					break;
				case 6:{
					p.display1();
					break;
				}
				case 5:
					sc.close();
					System.out.println("Program exists: ");
					System.exit(0);
					break;				
					
			}
			
		}while(choice !=5);
	}
	
	
}
