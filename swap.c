#include<stdio.h>
void swapping(int*,int*);
int main()
{
	int a,b;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	swapping(&a,&b);
	printf("%d\t%d\n",a,b);
}
void swapping(int *a,int* b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
