//pascal triangle  gem code at least
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
   int i,j;
   cin>>n;


    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
               cout<<fac(i)/(fac(j)*fac(i-j))<<' ' ;

        }
           cout<<endl;
    }






    return 0;
}
