//finding factorial using function
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
   int n;
   cin>>n;
   int ans = fac(n);

   cout<<ans<<endl;




    return 0;
}