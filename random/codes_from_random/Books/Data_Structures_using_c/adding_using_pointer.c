#include<stdio.h>
void calcS(int *ptr1, int *ptr2,int *t)
{
    *t = *ptr1 + *ptr2;
    //you won't have to return the value as they are written in memory
}
int main()
{
    int *ptr1 ,*ptr2,*t;

    ptr1 = 5;
    ptr2 = 6;
    printf("The value is : %d",*t);


}