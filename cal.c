#include<stdio.h>
#define A(x,y) x+y
#define S(x,y) x-y
#define M(x,y) x*y
#define D(x,y) x/y
int main()
{
	int a,b;
	printf("enter a and b values\n");
	scanf("%d%d",&a,&b);
	printf("add::%d ",A(a,b));
	printf("sub::%d ",S(a,b));
	printf("mul::%d ",M(a,b));
	printf("div::%d ",D(a,b));
                           printf("\n");
}

