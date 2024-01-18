#include<iostream>
using namespace std;
void ustrlen(char*);
void ustrcmp(char*,char*);
void uconcate(char*,char*);
void ustrcpy(char*,char*);

int main()
{
	char str[50];
	cout<<"Enter the string1 = "<<endl;
	cin>>str;
	char str1[50];
	cout<<"Enter the string2 = ";
	cin>>str1;
	ustrlen(str);
	ustrcmp(str,str1);
	uconcate(str,str1);
	ustrcpy(str,str1);
	return 0;
}
void ustrlen(char* str)
{
	int i=0;
	for(;str[i]!='\0';i++)
	{
		
	}
	cout<<"Length is ="<<i<<endl;
	
}

void ustrcmp(char* p,char* q)
{
	int j=0;
	int i=0;
	while(p[i]!= '\0')
	{
		if(p[i] != q[i])
		{
		 j++;
		}
		i++;
	}
	if(j==0)
	{
		cout<<"strings are equal \n";
	}
	else
	{
		cout<<"strings are not equal \n";
	}
}
	
void uconcate(char* str,char* str1)
	{
		int i=0;
		int j=0;
		while(str[i]!='\0')
		i++;
		while(str1[j]!='\0')
		{
			str[i]=str1[j];
		    j++;
		    i++;
		}
		str[i]='\0';
		cout<<"Concatenated String is "<<str<<endl;
	}

void ustrcpy(char* str, char* str1)
{
    int i;
      for (i = 0; str[i]!='\0'; i++)
      {
        str[i] = str1[i];
      }
    str1[i] = '\0';
    cout<<"string2 copied in string1 = "<<str<<endl;
}
