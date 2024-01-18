package pranav;

import java.util.Scanner;

public class addstring {

	public static int[][] input()
    {
        int in[][]=new int[5][5];
        Scanner sc=new Scanner(System.in);
       
        for(int i=0;i<in.length;i++)
        {
			 for(int j=0;j<in.length;j++)
			 {
				System.out.println("Enter the element:"+i);
				in[i][j]=sc.nextInt();
			 }
			 System.out.println();
			 
        }
        return in;
    }


    public static int[][] summation(int[][] arr,int[][] arr1)
    {
        int[][] sum = new int[arr.length][arr[0].length];
        for(int i=0;i<arr.length;++i)
        {
			for(int j=0;j<arr[i].length;++j)
			{
                sum[i][j]=arr[i][j]+arr1[i][j];
			}
        }
        return sum;
    }
    

    public static void display(int arr[][])
    {
        for(int i=0;i<arr.length;i++)
        {
			for(int j=0;j<arr.length;j++)
			{
            	System.out.print(arr[i][j]+" ");
			}
			System.out.println();
        }
    }

    public static void main(String[] args)
    {
        int[][] arr=input();
		int[][] arr1=input();
        int[][] a=summation(arr,arr1);
        display(a);
    
    }
	

}
