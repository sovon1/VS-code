#include<stdio.h>
void fun(int n)
{
    if(n==0)
    return;
    
     fun(n-1); 
    printf("%d ",n); //there is something to be evaluated after the recursive funciton
    
}
int main()
{
  fun(3);
  return 0;
}
