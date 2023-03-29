#include<stdio.h>
int main()
{
	char s[100],d;
	int i=0,j=0,c,a,l;
	printf("enter the string\n");
	scanf("%[^\n]s",s);
	for(l=0;s[l]!=0;l++);
	l=l-1;
	for(i=0;i<l-1;i++)
	{
		c=i;
		for(j=i+1;j<l;j++)
		{
			if(s[j]<s[c])
				c=j;
		}
		d=s[i];		
		s[i]=s[c];
		s[c]=d;
	}
	printf("%s\n",s);
}

