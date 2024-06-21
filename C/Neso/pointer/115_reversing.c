#include<stdio.h>
#define N 5
int main()
{
   

   int arr[N],*p;
   printf("\nEnter elements of the array : ");
   for(p=arr;p<=p+N-1;p++)
   {
    scanf("%d",p);
   }
      printf("\n elements in reverse order: ");
   for(p=arr+N-1;p>=arr;p--)
   {
    printf("%d ",*p);
   }
   


    return 0;
}