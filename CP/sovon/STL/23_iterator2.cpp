//pair of iterator
#include<bits/stdc++.h>
using namespace std;
int main()
{
   /*  vector<pair<int,int>> v= {2,3,4,5,6};
     for(int i=0;i<v.size();i++)
     {
        cout << v[i] <<" ";
     }
     cout<<endl;
     */
     //iterators works like pointer 
     //important for those things where do not find index
    //observe following two lines carefully
    vector<pair<int,int>>v_p = {{2,3},{3,4},{4,5}};
     vector<pair<int,int>>:: iterator it = v_p.begin();
     //cout<<(*(it+1));
    for(it=v_p.begin();it!=v_p.end();++it)
    {
     // cout<<(*it).first<<" "<<(*it).second<<endl;
        cout<<(it->first)<<" "<<(it->second)<<endl;

    }

    return 0;
}