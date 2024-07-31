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
   //now we will be using reference instead of copy
   for(int &value : v)
    value++;
   for(int value : v)
     cout<<value<<" ";
cout<<endl;
vector<pair<int,int>>v_p={{1,2},{2,3}};
  
  for(pair<int,int>&value :v_p){
    value.first++;value.second++;
   value.first= value.first*value.second;
   value.second = value.first+value.second;
   //majha aageya
  cout<<value.first<<" "<<value.second<<endl;
  }

  //auto keyword
  auto a = 1;
  //auto keyword automatically assumes the data type
  cout<<a<<endl;
  //see the second code 24_3 for optimized version of this code

}