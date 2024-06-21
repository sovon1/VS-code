#include<stdio.h>
int main()
{

    int A = 3; int B;
int *P = &A; int *Q = P; int *R = &B;
printf("Enter value:"); 
scanf("%d",R);
printf("%d %d\n",A,B); 
printf("%d %d %d\n", *P,*Q,*R);
}