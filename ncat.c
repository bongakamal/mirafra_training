#include<stdio.h>
   void cats(char s[],char d[],int n);
   int main()
   {
   int n;
           char s[100];
           char d[100];
           printf("enter source srting\n");
          scanf("%99[^\n]s",s);
          printf("enter another string\n");
         scanf(" %99[^\n]",d);
printf("enter how many char do you want to copy\n");
scanf("%d",&n);
          cats(s,d,n);
          printf("%s\n",d);
  }
  void cats(char s[],char d[],int n)
  {
          int i,j;
         for(i=0;s[i]!=0;i++);
          j=i;
          for(i=0;i<n&&d[i]!=0;i++,j++)
          {
                  d[j]=s[i];
          }
         
  
  
  }
  

  
                           
