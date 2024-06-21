#include<stdio.h>
int main()
{
    int x = 20;
    int *ptr;
    ptr = &x;
    printf("%d\n",*ptr);//this will print the value 
   printf("%d\n",ptr);//this will print the adress of that varible in decimal form
    printf("%p\n",ptr);//in hexadecimal form
   printf("%p\n",*ptr); //i have no idea what it is 
   return 0;

}