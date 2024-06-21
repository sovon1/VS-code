//guess the output
#include<stdio.h>
void sumOfArray(int arr[],int len,int *sum)
{
    for(int i=0;i<len;i++)
    {
     *sum = *sum + (arr[i]);
    }
    printf("The sumOfArray is %d",*sum);
}
int main()
{
   int arr[]={1,4,2,64,3,66,36};
   int sum=0;
   int len = sizeof(arr)/sizeof(arr[0]);
    sumOfArray(arr,len,&sum);
    return 0;
}