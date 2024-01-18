#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,sum=0;
	printf("enter the size ");
	scanf("%d",&n);
	int*ptr=(int*)malloc(n*sizeof(int));
	printf("accept elements ");
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
		
	}
     for(int i=0;i<n;i++)
	 {
	 	sum=sum+*(ptr+i);
	 	
	 }	
	 printf("sum= %d",sum);
	 free(ptr);
	 return 0;
	 
}
