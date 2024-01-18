package pack;

public class Person {

	private int Pid;
	private String Pname;
	private String Mobile;
	
	public Person() {
		Pid=0;
		Pname=null;
		Mobile=null;
		
	}
	public Person(int Pid,String Pname, String mobile) {
		this.Pid=Pid;
		this.Pname=Pname;
		this.Mobile=mobile;
		
	}
	
	public void setName(String Pname) {
		this.Pname=Pname;
		
	}
	public void setMobile(String Mobile) {
		this.Mobile=Mobile;
		
	}
	
	public void setPid(int Pid) {
		this.Pid=Pid;
		
	}
	
	public int getPid() {
		return this.Pid;
	}
	
	public String getPname() {
		return Pname;
	}
	
	public String getMobile() {
		return Mobile;
	}
	
	public String toString() {
		return "pid: "+this.Pid+"\nName: "+this.Pname+"\nMobile: "+this.Mobile;
	}
	
	

}
