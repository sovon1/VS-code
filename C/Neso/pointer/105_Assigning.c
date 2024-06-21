#include<stdio.h>
int main()
{
    int i = 10;
    int *p,*q;
    p = &i;
    q=p; //they both are both contains the same adress

     printf("%d %d\n",*p,*q);
//remember q = p is not same as *q = *p
//for example
int m = 50;
int n = 67;
int *x ,*y;
x = &m;
y = &n;
*x = *y;
//we just assigned the value but they do not contain the same adress 
printf("%d %d \n",*x,*y);


    return 0;
}