#include<stdio.h>
int main()
{
  int arr[]={1,3,2,4,5,4,35,35};
  int sum=0,*p;
  for(p=&arr[0];p<&arr[8];p++)
  {
    sum = sum + *p;
  }
  printf("the sum is : %d",sum);

    return 0;
}
