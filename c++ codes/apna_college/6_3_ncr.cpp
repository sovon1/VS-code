//finding the value for ncr
#include<iostream>
using namespace std;

int fac(int n)
{
    int i;
    int fact = 1;

    for(int i = 2;i<=n;i++)
    {
        fact = fact*i; // fact *=fact;
    }

    return fact; 
}

int main()
{
   int n,r;
   cin>>n>>r;
   int ans = fac(n)/fac(r)*fac(n-r);

   cout<<ans<<endl;




    return 0;
}