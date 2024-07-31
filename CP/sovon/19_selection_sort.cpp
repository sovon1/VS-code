//selection sort
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;++i)
   {
    cin>>arr[i];
   }
   //implementing selection sort
   for(int i=0;i<n;++i)
   {
    int minIndex = i;
    for (int j=i+1;j<n;++j)
    {
        if(arr[j]<arr[minIndex])
        minIndex = j;

    }
    swap(arr[i],arr[minIndex]);
   }
   //printing the elements
   for(int i = 0;i<n;++i)
   {
    cout<<arr[i]<<" ";
   }



}