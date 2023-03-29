#include<stdio.h>
int comparision(char,char);
int main()
{
	char s[100],d;
	int i=0,j=0,c,a,l;
	printf("enter the string\n");
	scanf("%[^\n]s",s);
	for(l=0;s[l]!=0;l++);
	l=l-1;
	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
		{
			c=comparision(s[j],s[j+1]);
			if(c==1)
			{
				d=s[j];
				s[j]=s[j+1];
				s[j+1]=d;
			}
		}
	}
	printf("%s\n",s);
}
int comparision(char c,char d)
{
	if(d<c)
		return 1;
	else
		return -1;
}
