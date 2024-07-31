//fibonacci number till range
#include<iostream>
using namespace std;
void fibo(int n)
{
    int t1 = 0 , t2 = 1 ,nextTerm;
    for(int i=1;i<n;i++)//i'th fibonacci
    {
        cout<<t1<<' '<<endl;
        nextTerm=t1+t2;
        t1=t2;
        t2 = nextTerm;


    }


}

int main()
{

    int n;
    cin>>n;
    fibo(n);



    return 0;
}
