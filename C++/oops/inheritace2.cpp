#include<bits/stdc++.h>
using namespace std;
class person {
   
   public: 
      string name;
      int age;

      
      //null

      person (string name , int age)
      {
        this ->name = name;
        this -> age = age;
        
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
student(string name , int age ,int rollNO) : person(name,age)
{
    this-> rollNO = rollNO;
    
}


};


int main()
{

  student ob1("sovon",19,21);

  ob1.getinfo();



}