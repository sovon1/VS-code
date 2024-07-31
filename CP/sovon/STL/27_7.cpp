//unordered set
//all the time complexity will be reduced to O(1)
#include<bits/stdc++.h>
using namespace std;
void print(multiset<string>s)
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
   multiset<string> s;
s.insert("abc"); //log(n)
s.insert("dfl");
s.insert("hfkja");
//you can insert many string which is same
//duplicate allowed
s.insert("abc");
auto it = s.find("abc");
// if(it !=s.end()){ //if it ka value is not end then i am gonna performing print
//     cout<<(*it); //log
// }
//in the same way you can perform delete
// if(it!=s.end()){
//     s.erase(it);} //it can also take values..i.e s.erase("abc");
//this s.erase will only delete the iterator points ,if dublicate first one will be deleted
//see 27_7 for the other one

// }
//don't use the following line,if you want to use carefully
s.erase("abc");//this will delete all the abc not only one
cout<<endl;
print(s);


}