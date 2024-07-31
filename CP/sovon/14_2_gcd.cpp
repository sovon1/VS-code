//int this program we will take two array
//one will store the forward gcd and another will store the backward gcd
//this is actually a real banger from the easy pov
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
        int forward[n+10];
        int backward[n+10];
        forward[0] = backward[n+1]=0;  //do you know why? bcz we want same number and our index is 1 to n so ....

    
        for(int i=1;i<=n;++i)
        {
            cin>>a[i];
        }
        for(int i = 1;i<=n;++i)
        {
            forward[i]=__gcd(forward[i-1],a[i]);
        }
        for(int i=n;i>=1;--i)
        {
            backward[i]=__gcd(backward[i+1],a[i]);
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
        //int gc = 0;
   
        cout<<__gcd(forward[l-1],backward[r+1])<<endl;
        /*here forward l-1 has computed all the forward gcd and backward r+1
         computed all the backword gcd from the last so if you want 
         to find out the gcd between l and r all you have to do is 
         to perfrom the operation between these two that's it*/
        }
     }
    
//main gist : finding gcd from 1 to l-1 and r+1 to n


    return 0;
}