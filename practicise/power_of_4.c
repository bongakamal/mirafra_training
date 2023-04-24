#include <stdio.h>

int main() {
	int n=3,d=0,c=0;
	for(int i=0;i<=31;i++)
	{
		if(n&(1<<i))
			c++;
		else
			if(c==0)
				d++;
		if(c>1)
			break;
	}
	if(c==1&&(d%2==0))
		printf("power of four");
	else 
		printf("no");
	return 0;
}
