/*
Given n strings,print unique strings
in lexicographical order
N<=10^5
|s|<=100 
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int N;
   cin>>N;
   set<string>s;
   for(int i=0;i<N;i++)
   {
    string str;
    cin>>str;
    s.insert(str);


   }
   //printing the value in sorted order 
   for(auto value : s)
   {
    cout<<value<<endl;
   }



}