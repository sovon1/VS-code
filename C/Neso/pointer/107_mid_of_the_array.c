#include<stdio.h>
int *findmid(int arr[],int len){
    return &arr[len/2];
}
int main()
{
   int arr[]={10,2,56,4,5};
   int len = sizeof(arr)/sizeof(arr[0]);
   int *mid = findmid(arr,len);
   printf("the mid of the array id : %d",*mid);
   


    return 0;
}