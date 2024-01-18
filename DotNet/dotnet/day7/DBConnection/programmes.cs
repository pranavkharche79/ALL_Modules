using MySql.Data.MySqlClient;

CONSOLE.WriteLine("WELCOME TO DATABSE")
MySqlConnection conn =new MySqlConnection;
conn.ConnectionString= "server=localhost;port=3306;user=root;password=welcome;database=ecommerce";


string query="update pranav set name=@name where id=@id";
console.WriteLine("enter the id of student");
int id=int.parse(console.ReadLine());
console.WriteLine("enter the name of student");
string name= console.ReadLine();

MySqlConnection cmd=new MySqlConnection(query,conn)
cmd.Parameters.AddWithValue(@id,id)
cmd.parameter.AddWithValue(@name,namespace Name
{
    
})
