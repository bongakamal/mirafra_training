#include<stdio.h>
int main()
{
	int x,y;
	printf("enter a two numbers you want to sunstract\n");
	scanf("%x%x",&x,&y);
	printf("%x\n",(x+(~(y)+1)));
	return 0;
}

