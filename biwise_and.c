#include<stdio.h>
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

int main()
{
	int a=-4;
	binary(a);
	int b=4;
	binary(b);
	a=a&b;
	printf("%d\n",a);
	binary(a);
a=a>>1;
	printf("%d\n",a);
	binary(a);
a=a<<1;
	printf("%d\n",a);
	binary(a);

}
