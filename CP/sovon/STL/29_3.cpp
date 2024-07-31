#include<bits/stdc++.h>
using namespace std;
int main()
{
map<pair<string,string>,vector<int>>m;

//first name last name number of subject and then their numbers

int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    string fn,ln;
    int count;
    cin>>fn>>ln>>count;
    for(int j=0;j<count;j++)
    {
     int x;
     cin>>x;
     m[{fn,ln}].push_back(x); 
    }
}
cout<<endl<<endl;
for(auto &pr : m)
{
    auto &full_name = pr.first;
    auto &list = pr.second;
    cout<<full_name.first<<" "<<full_name.second<<endl;
    cout<<list.size()<<endl;
     for(auto &element : list)
     {
        cout<<element<<" ";
     }
     cout<<endl;
}


}