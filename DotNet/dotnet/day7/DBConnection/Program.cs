using MySql.Data.MySqlClient;

Console.WriteLine("Welcome to database App");
MySqlConnection conn=new MySqlConnection();
conn.ConnectionString = "server=localhost;port=3306;user=root;password=welcome;database=ecommerce";


// string query ="select * from products";
// string query ="select count(*) from products";
// string query ="delete from products where productid=@id";
// Console.WriteLine("Enter the id to delete= ");
// int id = int.Parse(Console.ReadLine());
// string query = "create table pranav (id int, name varchar(55))";
// string query = "insert into pranav values(@id,@name)";
// Console.WriteLine("Enter the id to insert= ");
// int id = int.Parse(Console.ReadLine());
// Console.WriteLine("Enter name = ");
// string name = (Console.ReadLine());


string query = "Update pranav set name= @name where id=@id";
Console.WriteLine("Enter the id to update= ");
int id = int.Parse(Console.ReadLine());
Console.WriteLine("Enter name to change = ");
string name = (Console.ReadLine());

MySqlCommand msc=new MySqlCommand(query,conn);


msc.Parameters.AddWithValue("@id",id);
msc.Parameters.AddWithValue("@name",name);

try{
    conn.Open();
    
    // MySqlDataReader read = cmd.ExecuteNonQuery();

    // cmd.ExecuteNonQuery();
    msc.ExecuteNonQuery();
    // int a= int.Parse((cmd.ExecuteScalar()).ToString());
    // Console.WriteLine("no= "+a);
    // while (read.Read())
    // {
    //     Console.WriteLine(read["productid"].ToString()+" "+ read["title"].ToString());
    // }
    // read.Close();
}
catch(Exception e){
    Console.WriteLine(e.Message);
}
finally{
    conn.Close();
}