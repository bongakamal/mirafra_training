#include<stdio.h>
void copy (char s[],char d[]);
int main()
{
	char d[100];
	char s[100];
	printf("enter source srting\n");
	scanf("%99[^\n]s",s);
	printf("enter something in destination string\n");
	scanf(" %99[^\n]s",d);
	copy(s,d);
	printf("after copying destination array\n");
	printf("%s\n",d);
}
void copy(char s[],char d[])
{
	int i;
	for(i=0;s[i]!=0;i++)
	{
		d[i]=s[i];
	}
	d[i]=s[i];
}
