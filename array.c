#include<stdio.h>
#define gena(dt,fn,s) dt fn(dt a[])\
{\
	int i;\
	printf("enter array of 10 size\n");\
	for(i=0;i<10;i++){\
		scanf(#s,&a[i]);}\
	for(i=9;i>=0;i--){\
		printf(#s" ",a[i]);}\
	printf("\n");\
}

	gena(int,arrayi,%d)
int main()
{
	int a[10];
	arrayi(a);
}

