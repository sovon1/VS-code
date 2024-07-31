//knowing the getline function
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
   string s1 ;
   getline(cin,s1); //it takes one newline as string so for 3 we got 2 
   //to get rid of this we are using ignore
   cout<<s1<<endl;
    }


}