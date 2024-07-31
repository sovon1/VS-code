//it is a codechef problem to find out the gcd
//there it will face TLE in test case 2
//in the next program we will talk about that
#include<bits/stdc++.h>
const int N = 1e5;
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
        int n,q;
        cin>>n>>q;
        int a[n+10];
        for(int i=1;i<=n;++i)
        {
            cin>>a[i];
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
        int gc = 0;
        for(int i = 1;i<=l-1;++i)
        {
             gc = __gcd(gc,a[i]);
        }
        //this is all about range
        for (int i=r+1;i<=n;++i)
        {
            gc = __gcd(gc,a[i]);
        }
        cout<<gc<<endl;
        }
     }
    
//main gist : finding gcd from 1 to l-1 and r+1 to n


    return 0;
}