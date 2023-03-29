#include<stdio.h>
int main()
{
	char s[100],sub[100];
	int i=0,j=0,d=0;
	printf("enter string and substring\n");
	scanf("%[^\n]s",s);
	scanf(" %[^\n]s",sub);
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==sub[0])
		{
			d=i;
			for(j=0;s[j]!=0;j++,d++)
			{
				if(s[d]!=sub[j])
					break;
			}
		}
		if(sub[j]==0)
		{
			printf("%d\n",i);
			return 0;

		}
	}
	printf("-1\n");
	return 0;
}
