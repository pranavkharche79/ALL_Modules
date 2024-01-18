#include<stdio.h>
void concat(char*,char*);
int main()
{
	char a[10];
	char b[10];
	printf("enter first word:= \n");
	scanf("%s",a);
	printf("enter second word:= \n");
	scanf("%s",b);
	concat(a,b);
	printf("%s ",a);
	return 0;
}

void concat(char* p,char* q)
{
	while(*p!='\0')
	{
		p++;
	}
	while(*q!='\0')
	{
		*p=*q;
		p++;
		q++;
	}
}


