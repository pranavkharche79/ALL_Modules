package pack;

public class TestPerson {

	
	public static void main(String[] args) {
		Person p=new Person(12,"Kishori","33333");
		
		System.out.println(p);
		p.setPid(2222);
		Person p1=new Person(13, "Kishori","44444");
		
		System.out.println(p1);

	}

}

