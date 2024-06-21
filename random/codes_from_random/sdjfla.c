#include<stdio.h>
int main()
{
   int A = 10;
   printf("%d\n",&A);
   printf("%p\n",&A);
   //%p is adress in hexadecimal form and %d is the adress in deciaml form
   int *p = &A;
   printf("%d\n",p);
   int *q = p; //this q pointer holds the adress of p
   printf("%d %d %d \n",&A,p,q);
   int B;
int *R = &B; scanf("%d",R);
printf("%d %d\n",A,B); printf("%d %d %d\n", *p,*q,*R);

}