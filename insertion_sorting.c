#include<stdio.h>
void insertion_sorting(int a[],int n);
int main()
{
int i=0,n;
	printf("enter size\n");
	scanf("%d",&n);
	int a[n];
	printf("enter vaalues\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	insertion_sorting(a,n);
	for(i=0;i<n;i++)
		printf("%d",a[i]);
}
void insertion_sorting(int a[],int n)
{
int i=0,j=0,t=0;
	for(i=1;i<n;i++)
	{
		t=a[i];
		j=i-1;
		while((j>=0)&&(a[j]>t))
		{
//printf("%d",i);
			a[j+1]=a[j];
			j--;
		}
//printf("%d",i);
		a[j+1]=t;
	}
}
