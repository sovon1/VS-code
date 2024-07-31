#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num)
{

    int i;
    for(i=2; i<=sqrt(num); i++)
    {
        if(num%i==0)
            return false;
    }
    return true;

}
int main()
{
    //taking input
    int a ;
    int b ;
    int i;
    cin>>a>>b;
    //loop to check between the ranges
    for(i=a;i<=b;i++)
    {
        if(isPrime(i)) //sent to the function to do our work easily
        {
            cout<<i<<' '<<" is a prime number "<<endl;
        }
    }
    return 0;

}

