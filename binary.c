#define "header.h"
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
