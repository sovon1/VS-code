//function overriding is the defination of polymorphism
#include<iostream>
using namespace std;
class person {
  public: 
    virtual void display()
     {
        cout<<"i am a person"<<endl;
     }
};

class student : public person
{
  //display is already here
  public:
  void display()
  {
    cout<<"i am student"<<endl;
  }
};

class teacher : public person
{
  //display is already here
  public:
  void display()
  {
    cout<<"i am teacher"<<endl;
  }
};

int main()
{
   student s;
   teacher t;
   person *p;
   
   p = &s;
   p->display();
    p = &t;
   p->display();
   //do i look like a person who wants an easy life eh?
    return 0;
}