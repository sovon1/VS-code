#include<stdio.h>
int main()
{
   int a[2][2]={{1,2},{3,4}}
   //you had put 1 1 which is wrong in this case

   int *p;
   for(p=&a[0][0];p<=&a[2-1][2-1];p++)
   {
    printf("%d ",*p);
   }



    return 0;
}