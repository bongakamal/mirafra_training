// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n=0xfd,d=0,c=0;
printf("%x\n",n);
c=(((n&(0xf))<<4)|((n&(0xf0))>>4));
n=n&(~(0xf));
n=n&(~(0xf0));
n=n|c;
printf("%x\n",n);


    return 0;
}
