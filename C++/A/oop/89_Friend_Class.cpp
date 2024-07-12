#include<iostream>
using namespace std;

class A 
{
   private: 
     int id = 19;
     string name = "Sovon";
    public:
    friend class B;

/* she : i like you as a friend
 me : Friends can access private parts 
 she(annoyingly) : you always think of us as object 
 me : i meant you have some class fr
 ~and my father saw this joke(just like you are seeing rn) and he didn't like it and he removed me from the inheritence 

*/

};

class B 
{

   public:
   
   void display(A ob)
  {
    cout<<ob.id<<endl;
    cout<<ob.name<<endl;
  }

};
int main()
{
   A ob1;
   B ob2;
   ob2.display(ob1);


    return 0;
}