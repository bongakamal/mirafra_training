#include<stdio.h>
int main()
{
	char x[2];
//	x[0]='1';
//	x[1]='2';
	if(&x[1]-&x[0]<0)
		printf("up\n");
	else
		printf("down\n");
}
