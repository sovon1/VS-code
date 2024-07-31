//very easy code on recursion atleast i can say
#include<bits/stdc++.h>
using namespace std;
int digitsum(int n,int a[])
{
    if (n<0) return 0; 
    return a[n] + digitsum(n-1,a);
}
int main()
{

    int n; 
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the sum is : "<<digitsum(n-1,arr)<<endl;

}