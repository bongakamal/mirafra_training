#include<stdio.h>
#include <unistd.h>
#include <fcntl.h>              /* Obtain O_* constant definitions */
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
void *add(int *a)
{
	int A,b;
//int *a=(int*)d;
	read(a[0],&A,sizeof(int));
	read(a[0],&b,sizeof(int));
	printf("%d\n",b+A);
}
void *sub(int *a)
{

//int *a=(int*)d;
int c=1,f=4;
	write(a[1],&c,4);
	write(a[1],&f,4);
}
int main()
{
	int r,fd[2];
	pthread_t a,s;
	void *re;
	r=pipe(fd);
	r=pthread_create(&a,0,add,fd);
	r=pthread_create(&s,0,sub,fd);
	r=pthread_join(s,&re);
	r=pthread_join(a,&re);
	return 0;
}


