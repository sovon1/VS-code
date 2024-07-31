#include<bits/stdc++.h>
using namespace std;
//printing vector 
void printVec(vector<int>&v)
{
   cout<<"size : " <<v.size()<<endl;
   for(int i=0;i<v.size();++i)
   {
    cout<<v[i]<<" ";
   }
   v.push_back(8);
   cout<<endl;

}
int main()
{
      vector<int> v;
      int n;
      cin>>n;
      //taking input for vector
      for(int i=0;i<n;i++)
      {
        int x;
        cin>>x;
        v.push_back(x); //O(n)
      }
   
  //you can copy vector too
  vector<int>&v2 = v; //O(n)
  //adding extra element into that copied vector
  v2.push_back(9);
  printVec(v);
  printVec(v);
  printVec(v2);
  //you can perform on any data type
  
    return 0;
}