#include<bits/stdc++.h>
using namespace std;
class Teacher 
{   private:
      double salaray;
    public:
    
   Teacher() //constructor
   {
      //cout<<"HI,i am constructor"<<endl;

   } 
     //properties//attributes
     string name;
     string dept;
     string subject;
    

     //methods //member function
     void changeDept(string newDept)
     {
        dept = newDept;
     }
     //setter
     void setSalary(double s)
     {
        salaray = s;
     }
    //getter
     double getSalary ()
     {
        return salaray;
     }
};

int main()
{

  Teacher t1; //constructor call
  t1.name = "sovon";
  t1.subject = "C++";
  t1.dept = "computer science";
  t1.setSalary(95000);
  cout<<t1.name<<endl;
  cout<<t1.getSalary()<<endl;
   



}