//you can use in this way too
#include<bits/stdc++.h>
using namespace std;
int main()
{
     pair<int,string> p;
    // p = make_pair(2,"sovon");
    p = {2,"sovon"};//initialization
    pair<int ,string > &p1 = p;
    p1.first = 19;
    cout<<p.first<<" "<<p.second<<endl;
   pair<int,int>p_array[3];
   p_array[0]={1,2};
   p_array[1]={2,3};
   p_array[2]={3,4};
   for(int i=0;i<3;i++)
   {
    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
   }
   //now you can swap 2 elements simultanesously
   swap(p_array[0],p_array[2]);
   for(int i=0;i<3;i++)
   {
    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
   }

    return 0;
}