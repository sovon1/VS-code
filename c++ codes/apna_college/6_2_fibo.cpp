
#include<iostream>
using namespace std;

void fib(int n)
{
    int i, t1=0,t2=1,nextTerm;
    for(i=1;i<=n;i++)//ith fibo number
    {
        cout<<t1<<endl;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

    }
    return;

}
int main()
{
   int n;
   cin>>n;
   fib(n);




    return 0;
}
