#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int> v = {2,3,4,5,6};
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }
     cout<<endl;
     //iterators works like pointer 
     //important for those things where do not find index

     vector<int> :: iterator it = v.begin();
     //cout<<(*(it+1));
    for(it=v.begin();it!=v.end();++it)
    {
        cout<<(*it)<<endl;
    }

    return 0;
}