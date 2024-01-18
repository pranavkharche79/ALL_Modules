package pack;

import java.util.Scanner;

public class TestPersonArr {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int choice=0;
		do {
		System.out.println("1. Add new Person\n 2. display all\n 3. display by id\n 4. update mobile by id");
		System.out.println("5. display by name\n6. exit\n choice: ");
		choice=sc.nextInt();
		switch(choice) {
		case 1:
			PersonService.addNewPerson();
			break;
		case 2:
			PersonService.displayAll();
			break;
		case 3:
			System.out.println("enter id");
			int id=sc.nextInt();
			Person ob=PersonService.searchById(id);
			if(ob!=null) {
				System.out.println(ob);
			}
			else {
				System.out.println("not found "+id);
			}
			
			break;
		case 4:
			System.out.println("enter id");
			int id1=sc.nextInt();
			Person ob1=PersonService.updatebyid(id1);
			if(ob1!=null) {
				System.out.println(ob1);
			}
			else {
				System.out.println("not found "+id1);
			}
			break;
		case 5:
			System.out.println("enter name");
			sc.nextLine();
			boolean isNotEmpty = false;
			String nm=sc.nextLine();
			Person[] plist=PersonService.getByName(nm);
			
				for(int i=0;i<plist.length-1;i++) {
					if (plist[i]!=null) {
						isNotEmpty = true;
						System.out.println(plist[i]);
					}
				}
				if (isNotEmpty == false) {
				      System.out.println("not found");
				}
			break;
		case 6:
			sc.close();
			System.out.println("Thank you for visiting.....");
			//System.exit(0);
			break;
		default:
			System.out.println("wrong choice");
		}
		
		}while(choice!=6);
	}

}