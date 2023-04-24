#include<stdio.h>
enum s 
{
	a=99,
	s,
	k
};
struct xyz
{
	enum s s;
};
int main()
{
	struct xyz s;
s.s=a;
	printf("%d\n",s.s);
	int a=10;
	printf("%d\n",s.s);

}

