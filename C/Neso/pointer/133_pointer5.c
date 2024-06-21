#include<stdio.h>
void fun(int *p,int *q)
{
    p=q;
    // they both pointing the same varible 
    //since q contained the adress of 2000 now p also contains 2000
    //so 0 remains unchanged 
    //and adress 2000 gets the value 2
    //so the expected output is 0 2
    *p = 2;
}

int main()
{
   int i=0,j=1;
   fun(&i,&j);//send adress not just variable
   printf("%d %d",i,j);

    return 0;
}