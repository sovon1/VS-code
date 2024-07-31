//changing pari's value by adress
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


    return 0;
}