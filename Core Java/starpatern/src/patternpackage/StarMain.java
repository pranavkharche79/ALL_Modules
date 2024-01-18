package patternpackage;

import java.util.Scanner;

public class StarMain {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int ch=0;
		do {
		System.out.println("1. Diamond Pattern\n2. Print Table\n3. Check Prime no\n4. Exit\nChoice:");
		ch=sc.nextInt();
		switch (ch) {
		case 1: {
			System.out.println("Enter odd number only:");
			int p=sc.nextInt();
			Diamond.star(p);
			break;
		}
		case 2:{
			System.out.println("Enter number to print table:");
			int p=sc.nextInt();
			PrintTable.printtable(p);
			break;
		}
		case 3:{
			System.out.println("Enter number to print table:");
			int p=sc.nextInt();
			PrimeNo.Prime(p);
			break;
		}
		case 4:{
			System.out.println("Thank you for visiting");
			break;
		}
		default:
			throw new IllegalArgumentException("Unexpected value: " + ch);
		}
		} while (ch!=4);
}
}
