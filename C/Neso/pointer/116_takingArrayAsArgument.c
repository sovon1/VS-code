#include<stdio.h>
int sum(int brr[],int l)
{
    int sum=0;
    for(int i=0;i<l;i++)
    {
        sum+=brr[i];
    }
    return sum;
}
int main()
{

   int arr[]={1,2,3,4,5};
   int len = sizeof(arr)/sizeof(arr[0]);
   printf("%d",sum(arr,len));
   //i just passed the adress of the array


    return 0;
}