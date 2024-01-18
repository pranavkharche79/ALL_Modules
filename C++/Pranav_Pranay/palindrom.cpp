#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	char b[10];
	printf("enter a word\n");
	scanf("%s",a);
	strcpy(b,a);
	strrev(a);
	if (strcmp(a,b)==0)
	{
		printf("plaindrom");
	}
	else
	{
		printf("not a plindrom");
	}
} 
