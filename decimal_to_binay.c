#include<stdio.h>

int main()
{
	int a,i=0,s[32],j=31;
	printf("enter a number\n");
	scanf("%d",&a);
	if(a<0)
	{
		/*a=~(a)+1;
		  s[i]=1;
		  i++;*/
		a=(-a);
		a=(~a);
	}
	while(j>=0)
	{
		if(a&0x1)
			s[i]=1;
		else
			s[i]=0;
		a=a>>1;
		i++;
j--;
	}
	for(--i;i>=0;i--)
		printf("%d",s[i]);
	printf("\n");
}
