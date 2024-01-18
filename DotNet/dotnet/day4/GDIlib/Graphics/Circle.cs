using rohit;

namespace yash;

public class Circle : Shape, IPrinter
{
    public Point Center{get;set;}
    public int Radius{get;set;}

    public Circle():base(){
        this.Center=new Point(0,0);
        this.Radius=5;
    }

    public Circle(Point center,int radius,int w,string color):base(w,color){
        this.Center=center;
        this.Radius=radius;
    }
    public override void Draw()
    {
        Console.WriteLine("Drawing Cirlcle");
        Console.WriteLine(this);
    }

    public void Print()
    {
        Console.WriteLine("Printing Cirlcle");
        Console.WriteLine(this);
    }

    public override string ToString()
    {
        const float pi=3.14f;
        float area=pi*Radius*Radius;
        return base.ToString()+this.Center+" Radius= "+this.Radius+" Area= "+ area;
    }
}