import java.util.Scanner;

class Arrsum
{
    public static int[] input()
    {
        int in[]=new int[5];
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the element:");
        for(int i=0;i<in.length;i++)
        {
            in[i]=sc.nextInt();
        }
        return in;
    }

    public static int[] summation(int[] arr)
    {
        for(int i=0;i<arr.length;i++)
        {
            arr[i]=arr[i]+arr[i+1];
        }
        return arr;
    }
    
    public static void display(int arr[])
    {
        for(int i=0;i<arr.length;i++)
        {
            System.out.print(arr[i]+" ");
        }
    }

    public static void prime(int a)
    {
        if(a%2==0)
        {
            System.out.println("Even");
        }
        else
        {
            {
            System.out.println("odd");
        }
        }
    }

    public static void main(String[] args)
    {
        int[] arr=input();
        display(arr);
        int[] a=summation(arr);
        display(a);
        Hello.hi();
    }
}