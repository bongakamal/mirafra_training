#include<stdio.h>
void binary(int);
int main()
{
short int x=1;
binary(x);
x=(~x);
binary(x);
x=-x;
binary(x);
binary(x);
	printf("%d\n",x);
}
void binary (int n)
{
int i;
	for(i=31;i>=0;i--)
	{
		if(n&(0x1<<i))
			printf("1");
		else 
			printf("0");
	}
	printf("\n");
}


