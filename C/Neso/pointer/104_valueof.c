#include<stdio.h>
int main()
{
     int x = 5;
     int *ptr;
     ptr = &x; //initialized
     printf("%d\n",*ptr);
     *ptr = 7; //you will have to initialize it before using it
     //as i have initialized it before
     //it would results in segmentation fault
     //illegal memory accesing is known as segmentation fault
     printf("%d\n",*ptr);



    return 0;
}