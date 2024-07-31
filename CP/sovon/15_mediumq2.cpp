#include<bits/stdc++.h>
using namespace std;
const int N = 10e7 + 10;
long long int a[N];
int main()
{
    int q;
    cin>>q; 
    while (q--)
    {
        int a,b,k;
        cin>>a>>b>>k;
        for(int i=a;i<=b;i++)
        {
            a[i] = a[i] + k;
        }
    }
    for(int i=1;i<=10;i++)
    {
        cout<<a[i]<<" ";
    }
    
   
    // why is there something rather than nothing?



}