#include<bits/stdc++.h>
using namespace std;
//printing vector 
void printVec(vector<int>&v)
{
   cout<<"size : " <<v.size()<<endl;
   for(int i=0;i<v.size();++i)
   {
     cout<<v[i] <<" ";
   }
   cout<<endl;
}
int main()
{
    int N;
    cin>>N;
    vector<vector<int>>v;
    
          for(int i=0;i<N;i++)
      {
        int n;
        cin>>n;
        vector<int>temp; //to store these value

        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);//i just pushed a vector

      }

    //printing 
    for(int i=0;i<v.size();++i)
    {
        printVec(v[i]);
    }
   
    return 0;
}