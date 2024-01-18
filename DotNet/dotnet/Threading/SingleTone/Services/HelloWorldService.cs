using SingleTone.Interface;
namespace SingleTone.Services;
    public class HelloWorldService:IHelloWorldService
    {
        public HelloWorldService(){
            Console.WriteLine("hello wrold service initiated");
        }

        public string SaysHello()
        {
            return "Wish you have a great career Opportunity";
        }
        
    }