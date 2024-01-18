namespace yash;

public abstract class Shape{
public string Color{get;set;}
public int Width{get;set;}
public Shape(){
    this.Color="red";
    this.Width=4;
}

public Shape(int w,string s){
    this.Color=s;
    this.Width=w;
}

public abstract void Draw();

public override string ToString()
{
   return "Width= "+Width+ " , Color= "+Color;
}

}