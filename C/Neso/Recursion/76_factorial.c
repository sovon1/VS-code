#include<stdio.h>
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}

int main()
{
    int n;
    printf("Enter the number to find out the factorial : ");
    scanf("%d",&n);
    printf("%d",fact(n));
}
