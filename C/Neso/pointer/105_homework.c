#include<stdio.h>
int main()
{
    int i = 1;
   int *q; //this has to be declared 
    int *p=&i;
    
    q=p;
    *q = 9;

     printf("%d\n",*p);
        
        //*p contains the adress of i
        //same adress assigning to the value q
        //we are changing the value of pointer q means we are overwriting the adress
        //so it is replaced by 5
    



    return 0;
}