 #include<stdio.h>
   void upper (char s[]);
   int main()
   {
           
           char s[100];
           printf("enter source srting\n");
           scanf("%99[^\n]s",s);
          upper(s);
          printf("%s\n",s);
  }
  void upper(char s[])
  {
          int i;
          for(i=0;s[i]!=0;i++)
          {
                  if(s[i]>96&&s[i]<123)
			s[i]=s[i]-32;
          }
          s[i]=0;
  }


