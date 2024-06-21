#include<stdio.h>
void fun(int n)
{
    if(n==0)
    return;
    else
    printf("%d ",n);
    return fun(n-1); // doesn't work in stack implementation
    //cz nothing to be evalueted here
    
    /*Tail recursion is defined as a recursive function in which the recursive call is
     the last statement that is executed by the function. 
    So basically nothing is left to execute after the recursion call.*/
}
int main()
{
  fun(3);
  return 0;
}