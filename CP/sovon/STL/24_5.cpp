#include<bits/stdc++.h>
using namespace std;
void print(map<int,string>&m)
{
    cout<<m.size()<<endl;
      for(auto &pr:m)
    {
      cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main()
{
    map<int,string> m;
    m[1]="abc"; //
    m[5]="cdc";
    m[3]="acd";
    //another way
    //
    m.insert({4,"afg"});
    m[6]; //will take an empty string

    //searching in maps
   auto it = m.find(3); //it will return the 3's iterator 
   if(it!=m.end())
   m.erase(it); //you can pass thorugh string too
   //you can pss thorough itereator too
   // i mean m.erase(it);   
   print(m);
   //you can clear your maps too
   //m.clear();

   
//    if(it==m.end())
//    {
//      cout<<"NO value";
//    }
//    else
//    {
//     cout<<(*it).first<<" "<<(*it).second<<endl;
//    }
 //  cout<<endl;

    //gonna comment out this for loop to make a function

    // for(auto &pr:m)
    // {
    //   cout<<pr.first<<" "<<pr.second<<endl;
    // }
    // map<int,string>:: iterator it;
    // for(it=m.begin();it!=m.end();it++)
    // {
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }




}