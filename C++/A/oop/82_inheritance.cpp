#include<iostream>
using namespace std;
class person 
{ 
    public:
    string name;
    int age;
    void display()
    {
        cout<<name<<endl;
        cout<<age<<endl;
    }

};

class student : public person
{
   public:
   int id;
   void display2()
   {
    cout<<id<<endl;
    display();
   }


};

int main()
{
  student s1;
  s1.id = 19;
  s1.name = "sovon";
  s1.age = 21;
  s1.display2();
}