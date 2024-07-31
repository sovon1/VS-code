//very easy code on recursion atleast i can say
#include<bits/stdc++.h>
using namespace std;
int digitsum(int n)
{
    if (n==0) return 0; 
    return digitsum(n/10)+(n%10);
}
int main()
{
     
    int n; 
    cin>>n;
    cout<<"the sum is : "<<digitsum(n)<<endl;

}
//are you having hard time understanding recursion again? huh?