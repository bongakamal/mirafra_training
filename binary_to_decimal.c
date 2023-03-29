#include<stdio.h>
int main()
{
	char s[32];
	int a=0,b=0,i=0,j=0;
	printf("enter binary format\n");
	scanf("%[^\n]s",s);
	for(i=0;s[i]!=0;i++);
	for(j=0,--i;i>=0;i--,j++)
	{
		b=s[i]-48;
		a=a+(b*(1<<j));
	}

	printf("%d\n",a);
}
