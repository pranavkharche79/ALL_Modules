namespace Collection;

public class Books{
    private string[] titles{get;set;}
    public Books(){
        titles=new string[5];

        titles[0]="You can Win";
        titles[1]="Ignited Minds";
        titles[2]="Rich Dad, Poor Dad";
        titles[3]="Let us C";
        titles[4]="Effective C++";
    }

    // public override string ToString(){
    //     return 
    //     this.titles[0]+"\n"+
    //     this.titles[1]+"\n"+
    //     this.titles[2]+"\n"+
    //     this.titles[3]+"\n"+
    //     this.titles[4];
    // }

    public string this[int ind]{
        get{return titles[ind];}
        set{titles[ind]=value;}
    }

}