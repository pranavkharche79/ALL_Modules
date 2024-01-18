#include <stdio.h>
int ustrlen(char*);
int main()
{
	int len;
	char a[10];
	printf("enter a string \n");
	scanf("%s",a);
	len=ustrlen(a);
	printf("%d",len);
	return 0;
}
int ustrlen(char* b)
{
	int len=0;
	while (*b!='\0')
	{
		len++;
		b++;
	}
	return len;
}
