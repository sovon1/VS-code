/*given N string and q queries.
in each every you are given a  string print yes
if string is present else print no
n= 10^6
|s|<=100
Q<=10^6
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  unordered_set<string>s;
  for(int i=0;i<n;i++)
  {
    string str;
    cin>>str;
    s.insert(str);
  }
  int q;
  cin>>q;
  while(q--)
  {
    string str2;
    cin>>str2;
    auto it=s.find(str2);
    if(it!=s.end())
    cout<<"yes"<<endl;
    else
    cout<<"NO"<<endl;
  }


}