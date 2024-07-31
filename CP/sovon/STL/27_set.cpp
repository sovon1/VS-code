#include<bits/stdc++.h>
using namespace std;
void print(set<string>s)
{
    //1st method to print a set
    for(string value : s)
    {
        cout<<value<<endl;
    }
    cout<<endl;
    //2nd way to print a set 
//     for(auto it=s.begin();it!=s.end();it++)
//     {
//         cout<<(*it)<<endl;
//     }
 }
int main()
{
    //set stores unique elements
   set<string> s;
s.insert("abc"); //log(n)
s.insert("dfl");
s.insert("hfkja");
auto it = s.find("abc");
if(it !=s.end()){ //if it ka value is not end then i am gonna performing print
    cout<<(*it); //log
}
//in the same way you can perform delete
// if(it!=s.end()){
//     s.erase(it); //it can also take values..i.e s.erase("abc");


// }
cout<<endl;
print(s);


}