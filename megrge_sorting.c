#include<stdio.h>
int comparision(char,char);
int main()
{
	char s[100],d,p[50],q[50];
	int i=0,j=0,c,a,l;
	printf("enter the string\n");
	scanf("%[^\n]s",s);
	for(l=0;s[l]!=0;l++);
	l=l-1;
	for(i=0;i<l/2;i++)
	{
		p[i]=s[i];
	}
	for(j=0;s[i]!=0;i++,j++)
	{
		q[j]=s[i];
	}
	for(a=0;p[a]!=0;a++);
	a=a-1;
	for(j=0;j<a;j++)
	{
		for(i=0;i<a;i++)
		{
			c=comparision(p[i],p[i+1]);
			if(c==1)			
			{			
				d=p[i];
				p[i]=p[i+1];
				p[i+1]=d;
			}

		}
	}
	for(a=0;q[a]!=0;a++);
	a=a-1;
	for(j=0;j<a;j++)
	{
		for(i=0;i<a;i++)
		{
			c=comparision(q[i],q[i+1]);
			if(c==1)
			{
				d=q[i];
				q[i]=q[i+1];
				q[i+1]=d;
			}
		}
	}
	printf("%s\n%s\n",p,q);
	for(i=0,j=0,l=0;(p[i]!=0)&&(q[j]!=0);l++)
	{
		c=comparision(p[i],q[j]);
		if(c==-1)
		{
			s[l]=p[i];
			i++;
		}
		else
		{
			s[l]=q[j];
			j++;
		}
	}
	if(p[i]!=0)
	{
		for(;p[i]!=0;i++,l++)
			s[l]=p[i];
	}
	if(q[j]!=0)
	{
		for(;q[j]!=0;j++,l++)
			s[l]=q[j];
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

