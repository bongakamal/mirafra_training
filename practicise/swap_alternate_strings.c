#include<stdio.h>
int main()
{
	char s1[]={"hello"};
	char s2[]={"WORLD"};
	char s3[10];
int i=0,j=0,e=0;
	for(i=0;s1[j]!=0||s2[e]!=0;i++)
	{
		if(i%2==0)
		{
			s3[i]=s1[j];
			j++;
		}
		else
		{
			s3[i]=s2[e];
			e++;
		}
	}
	printf("%s\n",s3);
}
