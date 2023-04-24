#include<stdio.h>
struct s
{
	int a;
	struct ga
	{
		int d;
	}add;
};
int main()
{
	struct s Z;
	Z.add.d=10;
	printf("%d\n",Z.add.d);
}
