#include<stdio.h>
void ncopy (char s[],char d[],int n);
int main()
{
	int n;

	char s[100];
	char d[100];	
	printf("enter source srting\n");
	scanf("%99[^\n]s",s);
	printf("enter destination srting\n");
	scanf(" %99[^\n]s",d);
	printf("enter howy characters do you want to copy\n");
	scanf("%d",&n);
	ncopy(s,d,n);
	printf("%s\n",d);
}
void ncopy(char s[],char d[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		d[i]=s[i];

	}

}


