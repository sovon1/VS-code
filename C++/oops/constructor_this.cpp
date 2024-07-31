#include<bits/stdc++.h>
using namespace std;
class Teacher 
{   private:
      double salary;
    public:
    
//    Teacher() //non parametarized constructor
//    {
//       //cout<<"HI,i am constructor"<<endl;
//       dept = "Computer science";//one call is enough

//    }
   Teacher(string name, string dept,string subject,double salary) //parametarized constructor
   {
       this->name = name;
       this->dept = dept;
      this->subject = subject;
       this->salary = salary;  }
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
        salary = s;
     }
    //getter
     double getSalary ()
     {
        return salary;
     }
     void getinfo()
     {
        cout<<"name : "<<name<<endl;
        cout<<"subject : "<<subject<<endl;
     }
};

int main()
{

Teacher t1("sovon","computer science","C++",90000);

//   t1.name = "sovon";
//   t1.subject = "C++";
//   //t1.dept = "computer science";
//   t1.setSalary(95000);
t1.getinfo();
  
   



}