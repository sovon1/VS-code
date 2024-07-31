#include<bits/stdc++.h>
using namespace std;
//printing vector 
void printVec(vector<pair<int,int>>&v)
{
   cout<<"size : " <<v.size()<<endl;
   for(int i=0;i<v.size();++i)
   {
    cout<<v[i].first<<" "<<v[i].second<<endl;
   }
}
int main()
{
      vector<pair<int,int>>v;
      int n;
      cin>>n;
      printVec(v);//just seeing ,nothing else
      for(int i=0;i<n;i++)
      {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y}); //v.pushback(make_pair(x,y));
      }

      printVec(v);
   
    return 0;
}