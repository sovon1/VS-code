#include<iostream>
using namespace std;
//this one can handle any data type

template <class sovon1,class sovon2>
sovon2 add(sovon1 a,sovon2 b)
{
    return a+b;
}
int main()
{
  
  cout<<add(70,19.93)<<endl;

    return 0;
}