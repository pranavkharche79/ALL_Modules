package patternpackage;

public class PrimeNo {
	public static void Prime(int num) {
		int count=0;
		for (int i=2;i<num;i++)
		{
			if (num%i==0)
			{
				count++;
			}
		}
		if (count==0)
		{
			System.out.println("Number is Prime");
		}
		else
		{
			System.out.println("Number is not Prime");
		}
	}
}
