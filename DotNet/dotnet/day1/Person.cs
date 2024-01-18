namespace beans;

public class Person{
    private int pid;
    private string pname;
    private int qty;
    private double price;

    public Person()
    {
        Console.WriteLine("inside default cons");
    }

    public Person(int pid,string pname,int qty,double price){
        Console.WriteLine("inside para cons");
        this.pid=pid;
        this.pname=pname;
        this.qty=qty;
        this.price=price;
    }

    public int Pid {
        get;set;
    }
    public string Pname{
        get;set;
    }
    public int Qty{
        get;set;
    }
    public double Price{
        get;set;
    }

    public override string ToString()
    {
        return "Pid= "+pid+" Pname= "+pname+" Qty= "+qty+" Price= "+price+"\n"; 
    }
}