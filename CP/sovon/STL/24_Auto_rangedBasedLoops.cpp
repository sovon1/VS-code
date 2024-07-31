#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int>v = {2,3,4,5,6};
   //first way to print a vector 
   for(int i=0;i<v.size();i++)
   {
    cout<<v[i]<<" ";
   }
   cout<<endl;
  //2nd way to print a vector  ,this one is ranged based loop
   vector<int> :: iterator it = v.begin();
   for(it = v.begin();it!=v.end();it++)
   {
    cout<<(*it)<<" ";
   }
   cout<<endl;
   //3rd and easiest way to print a vector 
   for(int value : v)
    cout<<value<<" ";


}