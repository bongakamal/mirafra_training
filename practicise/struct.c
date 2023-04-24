#include<stdio.h>
struct q
{
	int a;
};
struct b
{
	int g;
	struct q i;
}l;
int main()
{
	l.i.a=100;
	printf("%d\n",l.i.a);
}
