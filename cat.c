#include<stdio.h>
void cats(char s[],char d[]);
int main()
{

	char s[100];
	char d[100];
	printf("enter source srting\n");
	scanf("%99[^\n]s",s);
	printf("enter another string\n");
	scanf(" %99[^\n]",d);
	cats(s,d);
	printf("%s\n",s);
}
void cats(char s[],char d[])
{
	int i,j;
	for(i=0;s[i]!=0;i++);
	j=i;
	for(i=0;d[i]!=0;i++,j++)
	{
		s[j]=d[i];
	}
	s[j]=0;


}


