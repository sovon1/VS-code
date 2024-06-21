//guess the output
#include<stdio.h>
int main()
{
   int arr[]={1,4,2,64,3,66,36};
   int *p = &arr[2];
   printf("%d ",*(p++));
   printf("%d ",*(p));

    return 0;
}