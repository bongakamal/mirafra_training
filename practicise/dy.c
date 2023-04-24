#include<stdio.h>
int main()
{
	char *p;
	int n;
	n=scanf("%m[4]",&p);
	if(n>0)
	{
		printf("%c",*p);
		printf("%d",n);
	}
	printf("%d",n);
}
