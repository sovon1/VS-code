#include<bits/stdc++.h>
using namespace std;
class person {
   
   public: 
      string name;
      int age;

      
      //null

      person ()
      {
        cout<<"i am parent constructor "<<endl;
      }
//it doesn't matter which function i am calling ....parent constructor will be called first 


};

class student : public person 
{
    public:
  int rollNO;
  void getinfo()
{
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<rollNO<<endl;
}
student()
{
    cout<<"i am child constructor"<<endl;
}


};


int main()
{

  student ob1;
  ob1.name = "sovon";
  ob1.age = 21;
  ob1.rollNO = 19;
  ob1.getinfo();



}