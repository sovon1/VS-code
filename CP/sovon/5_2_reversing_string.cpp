//string reverse in new way
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s1;
   string str_reverse;
   getline(cin,s1); 
   for(int i = s1.size()-1;i>=0;--i)
   {
     str_reverse.push_back(s1[i]); //this one is just awesome
     //i am loving this push back function
     //it just add the s[i] after the end of str_rev that's why it's name is push back
   }
   cout<<str_reverse<<endl;
   //now you can check palindrome too
   if(s1==str_reverse) cout<<"Yes it is palindrome"<<endl;
   else cout<<"NO it is not palindrome"<<endl;



}