//Unfinished code 
//conceptual problem here
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
void merge(int l,int r,int mid)
{
    int l_sz = mid-l+1;
    int L[l_sz+1];
    int r_sz = r-mid;
    int R[r_sz + 1];
    for(int i=0;i<l_sz;++i)
    {
        L[i] = a[i+l];
    }
    for(int i=0;i<r_sz;i++)
    {
        R[i]=a[i+mid+1];
    }
    L[l_sz]
}
int main()
{
    int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;++i)
   {
    cin>>arr[i];
   }

}